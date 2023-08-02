#ifndef KRISVERS_TOOLKIT_TKPLATFORM_H
#define KRISVERS_TOOLKIT_TKPLATFORM_H

#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32)
	#define TKPLATFORM_WINDOWS 1
#elif defined(__linux__) || defined(__gnu_linux__)
	#define TKPLATFORM_LINUX 1
#elif __APPLE__
	#include <TargetConditionals.h>
	#if TARGET_OS_MAC
		#define TKPLATFORM_MACOS 1
	#endif
#else
	#define TKPLATFORM_UNKNOWN 1
#endif

#endif
