#pragma once

namespace ZEGO
{
    namespace SurfaceMerge
    {
        struct ZegoRect
        {
            int xPos;
            int yPos;
            int width;
            int height;
        };

        enum CaptureError
        {
            Unexpected = 1,
            TargetUnspecified = 2,		// �ɼ�Ŀ��δָ��
            TargetInvalid = 3, 			// �ɼ�Ŀ��ʧЧ��������ʾ�����ε������ڱ��ر�
            CaptureFunctionFailed = 4,
        };

        struct ScreenItem
        {
            char szName[32];
            bool bPrimary;
        };

        struct WindowItem
        {
            void* winId;
            char szTitle[256];
            char szExe[256];
        };

        enum CaptureType
        {
            Camera = 1,                      //����ͷ
            Window = 2,                      //����
            Screen = 3,                      //��Ļ
            ScreenRect = 4                   //��Ļ����
        };

        struct ZegoCaptureItem
        {
            CaptureType captureType;         //�ɼ�Դ����

            union
            {
                char deviceId[256];          //����ͷ�豸ID
                void *hWnd;                  //������
                char screenName[256];        //��Ļ����
                ZegoRect screenRect;         //��Ļ����
            } captureSource;
           
            ZegoRect position;               //�����Ƶλ��
        };
    }
}
