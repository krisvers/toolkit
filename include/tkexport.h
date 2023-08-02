#ifndef KRISVERS_TOOLKIT_TKEXPORT
#define KRISVERS_TOOLKIT_TKEXPORT

#include <tkplatform.h>

#ifdef TKPLATFORM_WINDOWS
	#ifdef TKEXPORT_SYMBOLS_FLAG
		#define TKEXPORT __declspec(dllexport)
	#else
		#define TKEXPORT __declspec(dllimport)
	#endif
#else
	#define TKEXPORT __attribute__((visibility("default")))
#endif

#endif
