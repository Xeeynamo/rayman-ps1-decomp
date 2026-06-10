#ifndef _MISSING_RAND_H
#define _MISSING_RAND_H

#ifndef PLATFORM_PSYZ
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif
extern int  rand(void);
extern void srand(unsigned int);
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif
#endif

#endif