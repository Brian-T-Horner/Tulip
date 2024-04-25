#pragma once

#ifdef TP_PLATFORM_WINDOWS
	#ifdef TP_BUILD_DLL
		#define TULIP_API __declspec(dllexport)
	#else
		#define TULIP_API __declspec(dllimport)
	#endif
#else
	#error Tulip only supports Windows!
#endif
