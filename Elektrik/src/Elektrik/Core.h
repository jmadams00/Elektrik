#pragma once

#ifdef EK_PLATFORM_WINDOWS
	#ifdef EK_BUILD_DLL
		#define ELEKTRIK_API _declspec(dllexport)
	#else
		#define ELEKTRIK_API _declspec(dllimport)	
	#endif

#endif