/********************************************************
[DateTime]:2013.9.10
[Author  ]:Mr.Huang
[Content ]:this is the basic lib
/********************************************************/
#pragma once
#include "stdafx.h"
#include <string>

using namespace System;

namespace EAViewEngine
{
	public class EAViewFuncLib
	{
	public:
		EAViewFuncLib(void);
		~EAViewFuncLib(void);
		///<summary>
		///将托管的String转成std::string
		///<summary>
		static std::string ConvertToString(System::String^ str);
	};
}