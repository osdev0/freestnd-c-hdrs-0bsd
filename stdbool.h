#if !defined(_STDBOOL_H) || defined(__LIBC_GUARDLESS_INCLUDE)
#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _STDBOOL_H 1
#endif

#ifndef __STDBOOL_H_MACROS
#define __STDBOOL_H_MACROS 1

#ifndef __cplusplus
#  define bool _Bool

#  define true 1
#  define false 0
#endif

#define __bool_true_false_are_defined 1

#endif

#endif
