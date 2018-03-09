#pragma once

#define ZEGO_API  __declspec(dllexport)

namespace ZEGO
{
	namespace AUDIOHOOK
	{
		//��ʼ����ƵHookģ��. SDK�ڲ�û�б�֤�̰߳�ȫ
		//Ŀǰֻ֧��hook 32λapp
		ZEGO_API void InitAuidoHook();

		//����ʼ��
		ZEGO_API void UnInitAudioHook();

		//������Ƶhook
		//pszAppFilePath ע���Ŀ�����·������kugo
		//pszInjectDllPath ע���dll·��
		//��������Ѿ����ڣ�hook��ʧ��
		ZEGO_API bool StartAudioHook(const char *pszAppFilePath, const char *pszInjectDllPath);

		//��ʼ��Ƶ¼��
		ZEGO_API bool StartAudioRecord();
		//ֹͣ��Ƶ¼��
		ZEGO_API void StopAudioRecord();
		
		//��ȡ��Ƶ����
		ZEGO_API void GetAUXData(unsigned char *pData, int *pDataLen, int *pSamepleRate, int *pNumChannels);
	}
}