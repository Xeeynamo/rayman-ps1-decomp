#ifndef _MISSING_LIBCD_H_
#define _MISSING_LIBCD_H_

#ifndef PLATFORM_PSYZ
void (*CdDataCallback(void (*func)()));
void CdInit(void);
#endif

#endif