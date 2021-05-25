#pragma once

#ifdef TERMINUS_PLATFORM_WIN
	#ifdef TERMINUS_BUILD_DLL
		#define TERMINUS_API __declspec(dllexport)
	#else
		#define TERMINUS_API __declspec(dllimport)
	#endif
#else
	#error Terminus only support Windows!
#endif