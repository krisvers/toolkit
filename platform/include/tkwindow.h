#ifndef KRISVERS_TOOLKIT_PLATFORM_TKWINDOW_H
#define KRISVERS_TOOLKIT_PLATFORM_TKWINDOW_H

#include <tkexport.h>
#include <tktypes.h>

typedef struct TKWindow {
	void * _internal;
	u16 width;
	u16 height;
} tkwindow_t;

#endif
