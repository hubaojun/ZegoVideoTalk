#pragma once

#include "video_capture.h"

namespace ZEGO
{
    namespace SurfaceMerge
    {
        class IZegoSurfaceMergeCallback
        {
        public:
            /// \brief ��Ƶ���ݻ�Ϻ�����ݽ��
            /// \param surfaceMergeData ��Ƶ����
            /// \param datalength       ��Ƶ���ݳ���
            /// \param frameFormat      ��Ƶ���ݸ�ʽ�������video_captureͷ�ļ�����
            /// \prarm reference_time   �ɼ�����֡��ʱ���
            /// \param reference_time_scale  �ɼ�ʱ�����λ������10^3��΢��10^6������10^9
            virtual void OnSurfaceMergeResult(
                unsigned char *surfaceMergeData,
                int datalength,
                const AVE::VideoCaptureFormat& frameFormat, 
                unsigned long long reference_time,
                unsigned int reference_time_scale) {}

			/// \brief ��Ƶ���ݻ��ǰ�ĵ���ͼ�����ݽ��
			/// \param pImageData               ��Ƶ����
			/// \param datalength               ��Ƶ���ݳ���
			/// \param width,height,xPos,yPos   ͼ��λ��
			/// \param frameFormat              ��Ƶ���ݸ�ʽ�������video_captureͷ�ļ�����
			/// \prarm reference_time           �ɼ�����֡��ʱ���
			/// \param reference_time_scale     �ɼ�ʱ�����λ������10^3��΢��10^6������10^9
			virtual void OnSubViewTakeSnapShot(
				unsigned char *pImageData,
				int datalength,
				int width, int height, int xPos, int yPos,
				const AVE::VideoCaptureFormat& frameFormat,
				unsigned long long reference_time,
				unsigned int reference_time_scale) {}

            /// \breif �������ݲɼ�����
            /// \param nErrorCode �������CaptureError����
            virtual void OnWindowCaptureError(int nErrorCode) {}

            /// \breif ����ͷ���ݲɼ�����
            /// \param deviceId     ����ͷ�豸ID
            /// \param reason       ����ԭ��
            virtual void OnCameraCaptureError(const char *deviceId, const char* reason) {}
        };
    }
}