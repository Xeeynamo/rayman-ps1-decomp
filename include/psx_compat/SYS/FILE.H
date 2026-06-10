#ifndef PSX_COMPAT_SYS_FILE_H
#define PSX_COMPAT_SYS_FILE_H
#if !(defined(_MSC_VER) || defined(__MINGW32__))
#include <sys/file.h>
#endif
#include <fcntl.h>
#endif
