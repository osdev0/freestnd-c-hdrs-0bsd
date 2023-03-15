#if !defined(_STDALIGN_H) || defined(__LIBC_GUARDLESS_INCLUDE)
#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _STDALIGN_H 1
#endif

#ifndef __STDALIGN_H_MACROS
#define __STDALIGN_H_MACROS 1

#ifndef __cplusplus
#  define alignas _Alignas
#  define alignof _Alignof

#  define __alignof_is_defined 1
#endif

#define __alignas_is_defined 1

#endif

#endif
