/**
 * Copyright (c) 2015, Chao Wang <hit9@icloud.com>
 */

#ifndef _CW_UTILS_H
#define _CW_UTILS_H     1

#include <stdarg.h>

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * **************** Common Utils **********************
 */

#define MIN(a, b)   ((a) < (b) ? (a) : (b))
#define MAX(a, b)   ((a) > (b) ? (a) : (b))

int _scnprintf(char *buf, size_t size, const char *fmt, ...);
int _vscnprintf(char *buf, size_t size, const char *fmt, va_list args);

/**
 * ****************  Date Time Utils **********************
 */
double time_now(void);

/**
 * ****************  IO Utils **********************
 */

#if defined(__cplusplus)
}
#endif

#endif