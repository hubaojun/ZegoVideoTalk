﻿#pragma once

#include "ZegoBase.h"


class QZegoVideoTalkDemoApp
{
public:
	QZegoVideoTalkDemoApp();

public:
	QZegoBase &GetBase();

private:
	QZegoBase m_base;
};

extern QZegoVideoTalkDemoApp theApp;

QZegoAVSignal * GetAVSignal(void);