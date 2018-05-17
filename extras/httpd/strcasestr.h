#ifndef STRCASESTR_H
#define STRCASESTR_H

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

char *strcasestr(const char *s, const char *find);
char *strncasestr(const char *s, const char * find, size_t slen);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* STRCASESTR_H */
