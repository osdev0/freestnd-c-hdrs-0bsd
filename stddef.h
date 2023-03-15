#if !defined(_STDDEF_H) || defined(__LIBC_GUARDLESS_INCLUDE)
#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _STDDEF_H 1
#endif

typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;

#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;
#endif

#ifdef __cplusplus
typedef decltype(nullptr) nullptr_t;

enum class byte : unsigned char {};
#endif

#ifndef __STDDEF_H_MACROS
#define __STDDEF_H_MACROS 1

#ifdef NULL
#undef NULL
#endif

#ifndef __cplusplus
#  define NULL ((void *)0)
#else
#  define NULL 0
#endif

#define offsetof(s, m) __builtin_offsetof(s, m)

#endif

#endif
