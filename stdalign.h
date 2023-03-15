#if !defined(_STDALIGN_H) || defined(__LIBC_GUARDLESS_INCLUDE)

#ifndef _STDALIGN_H

#ifndef __cplusplus
#  define alignas _Alignas
#  define alignof _Alignof

#  define __alignof_is_defined 1
#endif

#define __alignas_is_defined 1

#endif

#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _STDALIGN_H 1
#endif

#endif
