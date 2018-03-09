//
//  ZegoManager.m
//
//
//  Created by summery on 13/09/2017.
//  Copyright © 2017 ZEGO. All rights reserved.
//

#import "ZegoManager.h"
#import "ZegoSetting.h"

@implementation ZegoManager

static ZegoLiveRoomApi *_apiInstance = nil;

+ (ZegoLiveRoomApi *)api {
    if (_apiInstance == nil) {
        
#ifdef VIDEOTALK
        // 业务类型为：实时音视频类型
        [ZegoLiveRoomApi setBusinessType: 2];
#endif
        
        // 测试环境
        [ZegoLiveRoomApi setUseTestEnv:[ZegoSetting sharedInstance].useTestEnv];
        
        // 调试信息
#ifdef DEBUG
        [ZegoLiveRoomApi setVerbose:YES];
#endif
        
#ifdef VIDEOLIVE
        // 外部渲染
        [ZegoLiveRoomApi enableExternalRender:[ZegoSetting sharedInstance].useExternalRender];
        
        // 初始化外部采集和滤镜
        [[ZegoSetting sharedInstance] setupVideoCaptureDevice];
        [[ZegoSetting sharedInstance] setupVideoFilter];
#endif
        
        // 初始化用户信息
        [ZegoLiveRoomApi setUserID:[ZegoSetting sharedInstance].userID userName:[ZegoSetting sharedInstance].userName];
        
        // 初始化 SDK 实例
        _apiInstance = [[ZegoLiveRoomApi alloc] initWithAppID:[ZegoSetting sharedInstance].appID appSignature:[ZegoSetting sharedInstance].appSign];
        
        // 初始化硬件编解码配置
#if TARGET_OS_SIMULATOR
        [ZegoSetting sharedInstance].useHardwareDecode = NO;
        [ZegoSetting sharedInstance].useHardwareEncode = NO;
#else
        [ZegoSetting sharedInstance].useHardwareDecode = YES;
        [ZegoSetting sharedInstance].useHardwareEncode = YES;
#endif
        
        [ZegoLiveRoomApi requireHardwareDecoder:[ZegoSetting sharedInstance].useHardwareDecode];
        [ZegoLiveRoomApi requireHardwareEncoder:[ZegoSetting sharedInstance].useHardwareEncode];
        
#ifdef VIDEOLIVE
        // 初始化流量控制配置
        if ([ZegoSetting sharedInstance].appType == ZegoAppTypeUDP || [ZegoSetting sharedInstance].appType == ZegoAppTypeI18N) {
            [_apiInstance enableTrafficControl:YES properties:ZEGOAPI_TRAFFIC_FPS | ZEGOAPI_TRAFFIC_RESOLUTION];
        }
#endif
    }

    return _apiInstance;
}

+ (void)releaseApi {
    _apiInstance = nil;
}

@end

