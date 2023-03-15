#if !defined(_LIMITS_H) || defined(__LIBC_GUARDLESS_INCLUDE)
#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _LIMITS_H 1
#endif

#ifndef __LIMITS_H_MACROS
#define __LIMITS_H_MACROS 1

#ifndef __LIBC_C_JOIN
#   define __LIBC_C_EXPAND_JOIN(x, suffix) x ## suffix
#   define __LIBC_C_JOIN(x, suffix) __LIBC_C_EXPAND_JOIN(x, suffix)
#endif

#define CHAR_BIT __CHAR_BIT__

#define MB_LEN_MAX 16

#define SCHAR_MAX __SCHAR_MAX__
#define SCHAR_MIN (-SCHAR_MAX - 1)

#define UCHAR_MAX (__LIBC_C_JOIN(SCHAR_MAX, U) * 2 + 1)

#ifdef __CHAR_UNSIGNED__
#   define CHAR_MAX UCHAR_MAX
#   define CHAR_MIN 0
#else
#   define CHAR_MAX SCHAR_MAX
#   define CHAR_MIN SCHAR_MIN
#endif

#define SHRT_MAX __SHRT_MAX__
#define SHRT_MIN (-SHRT_MAX - 1)

#define USHRT_MAX (__LIBC_C_JOIN(SHRT_MAX, U) * 2 + 1)

#define INT_MAX __INT_MAX__
#define INT_MIN (-INT_MAX - 1)

#define UINT_MAX (__LIBC_C_JOIN(INT_MAX, U) * 2 + 1)

#define LONG_MAX __LONG_MAX__
#define LONG_MIN (-LONG_MAX - 1)

#define ULONG_MAX (__LIBC_C_JOIN(LONG_MAX, U) * 2 + 1)

#define LLONG_MAX __LONG_LONG_MAX__
#define LLONG_MIN (-LLONG_MAX - 1)

#define ULLONG_MAX (__LIBC_C_JOIN(LLONG_MAX, U) * 2 + 1)

#endif

#endif
