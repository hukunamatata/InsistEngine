#pragma once

#ifdef INSIST_PLATFORM_WINDOWS
	#ifdef INSIST_BUILD_DLL
		#define INSIST_API __declspec(dllexport)
	#else
		#define INSIST_API __declspec(dllimport)
	#endif
#else
	#error Insist only support Windows!
#endif