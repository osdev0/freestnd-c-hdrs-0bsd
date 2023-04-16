#if !defined(__FSTD_HDRS_STDARG_H) || defined(__FSTD_HDRS_CXX_WRAP)
#if !defined(__FSTD_HDRS_CXX_WRAP)
#define __FSTD_HDRS_STDARG_H 1
#endif

typedef __builtin_va_list va_list;

#ifndef __FSTD_HDRS_STDARG_H_MACROS
#define __FSTD_HDRS_STDARG_H_MACROS 1

#define va_start(v, l) __builtin_va_start(v, l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)
#if (defined(__cplusplus) && (__cplusplus >= 201103L)) || (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L))
#  define va_copy(d, s) __builtin_va_copy(d, s)
#endif

#endif

#endif
