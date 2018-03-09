//
//  ZegoVideoTalkAdvancedTableViewController.m
//  VideoTalk
//
//  Created by summery on 24/10/2017.
//  Copyright © 2017 zego. All rights reserved.
//

#import "ZegoVideoTalkAdvancedTableViewController.h"
#import "ZegoManager.h"
#import "ZegoSetting.h"

@interface ZegoVideoTalkAdvancedTableViewController ()

@property (weak, nonatomic) IBOutlet UISwitch *encodeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *decodeSwitch;

@end

@implementation ZegoVideoTalkAdvancedTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self updateUIView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)toggleEncode:(id)sender
{
    UISwitch *s = (UISwitch *)sender;
    [ZegoSetting sharedInstance].useHardwareEncode = s.on;
    [self updateUIView];
}

- (IBAction)toggleDecode:(id)sender
{
    UISwitch *s = (UISwitch *)sender;
    [ZegoSetting sharedInstance].useHardwareDecode = s.on;
}

- (void)updateUIView {
    self.encodeSwitch.on =  [ZegoSetting sharedInstance].useHardwareEncode;
    self.decodeSwitch.on =  [ZegoSetting sharedInstance].useHardwareDecode;
}

@end
