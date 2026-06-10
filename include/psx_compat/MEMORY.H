#ifndef PSX_COMPAT_MEMORY_H
#define PSX_COMPAT_MEMORY_H
#include <string.h>
#if !(defined(_MSC_VER) || defined(__MINGW32__))
#include <strings.h>
#endif
#endif
