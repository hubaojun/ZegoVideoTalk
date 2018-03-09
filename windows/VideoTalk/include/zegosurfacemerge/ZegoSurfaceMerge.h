#pragma once

#include "ZegoSurfaceMergeDefine.h"
#include "ZegoSurfaceMergeCallback.h"
#include <vector>

#ifndef EXTERN_C
#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif
#endif

#ifdef WIN32
#ifdef ZEGO_EXPORTS
#define ZEGO_API __declspec(dllexport)
#else
#define ZEGO_API __declspec(dllimport)
#endif
#else
#define ZEGO_API __attribute__((visibility("default")))
#endif

namespace ZEGO
{
    namespace SurfaceMerge
    {
        /// \brief ��ʼ����Ƶ���ģ��,���̰߳�ȫ����UnInit���ʹ��
        /// \note ������framework InitSDKǰ����
        ZEGO_API void Init();

        /// \brief ����ʼ����Ƶ���ģ�飬���̰߳�ȫ����Init���ʹ��
        ZEGO_API void UnInit();
        
        /// \brief ���ûص��ӿ�
        /// \param[in] pCallback �ص��ӿ�ʵ��
        ZEGO_API void SetMergeCallback(IZegoSurfaceMergeCallback *pCallback);

        /// \brief ���û����Ƶ�Ĵ�С
        /// \param[in] surfaceWidth  ���
        /// \param[in] surfaceHeight �߶�
        ZEGO_API void SetSurfaceSize(int surfaceWidth, int surfaceHeight);

        /// \brief ���û����Ƶ��Ҫ��Ⱦ���Ĵ���
        /// \param[in] renderView ��Ⱦ����
        ZEGO_API void SetRenderView(void *renderView);

        /// \brief ������Ƶ�����Ϣ
        /// \param[in] itemList  Ҫ��ϵĴ���(����ͷ)�������Ϣ�б�
        /// \param[in] itemCount ��Ƶ�������Դ����
        /// \note �����Ƶ�Ĳ㼶��ϵ��itemList�б���Ⱥ�˳�������
        /// \note ���б���Խ��ǰ�������Ƶ�Ĳ㼶Խǰ
        ZEGO_API bool UpdateSurface(ZegoCaptureItem *itemList, unsigned int itemCount);

        /// \brief ���òɼ����ݵ�֡��
        /// \param[in] nFPS ��Ч��Χ5~30��Ĭ��Ϊ15
        ZEGO_API void SetFPS(int nFPS);

        /// \brief �����Ƿ���ʾ���
        /// \param[in] bVisible �Ƿ���ʾ���
        ZEGO_API void SetCursorVisible(bool bVisible);

        /// \brief �����Ƿ���ʾ���������
        /// \param[in] bEnabled �Ƿ���ʾ���������
        ZEGO_API void EnableClickAnimation(bool bEnabled);

        /// \brief ͬ��ö����Ļ�б�������Ļ�����Ƿ�����
        /// \param[out] uCount ��Ļ����
        /// \return ��Ļ�б��׵�ַ������Ե���FreeScreenList�ͷ�
        ZEGO_API ZEGO::SurfaceMerge::ScreenItem* EnumScreenList(unsigned int& uCount);

        /// \brief ͬ���ͷ�ö�ٵ�����Ļ�б�
        /// \param[in] pScreenList ö�ٵ�����Ļ�б��׵�ַ
        ZEGO_API void FreeScreenList(ZEGO::SurfaceMerge::ScreenItem* pScreenList);

        /// \brief ͬ��ö�ٴ����б��������ڱ��⡢���ڶ�Ӧ��ִ���ļ���
        /// \param[out] uCount ��������
        /// \param[in] bIncludeIconic ö��ʱ�Ƿ������С���Ĵ���
        /// \return �����б��׵�ַ������Ե���FreeWindowList�ͷ�
        ZEGO_API ZEGO::SurfaceMerge::WindowItem* EnumWindowList(unsigned int& uCount, bool bIncludeIconic);

        /// \brief ͬ���ͷ�ö�ٵ��Ĵ����б�
        /// \param[in] pWindowList ö�ٵ��Ĵ����б��׵�ַ
        ZEGO_API void FreeWindowList(ZEGO::SurfaceMerge::WindowItem* pWindowList);

		/// \brief ��ȡ�Ӵ���ͼ��
		/// \param[in] nViewIndex �Ӵ���ͼ�����������itemListһ��
		ZEGO_API bool TakeSubViewSnapShot(int nViewIndex);
    }
}