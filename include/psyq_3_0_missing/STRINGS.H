#ifndef	_MISSING_STRINGS_H
#define	_MISSING_STRINGS_H

#ifndef PLATFORM_PSYZ
extern char *strcat (char *, const char *);
extern int   strcmp (/* char *, char * */);	/* To avoid conflicting */
extern int   strncmp(const char *,const char *, int);
extern char *strcpy (/* char *, char * */);	/* To avoid conflicting */
extern char *strncpy(char *, const char *, int);
extern int   strlen (/* char * */);		/* To avoid conflicting */
#else
#include <string.h>
#endif

#endif