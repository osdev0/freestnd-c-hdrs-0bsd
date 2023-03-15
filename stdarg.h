#if !defined(_STDARG_H) || defined(__LIBC_GUARDLESS_INCLUDE)

typedef __builtin_va_list va_list;

#ifndef _STDARG_H

#define va_start(v, l) __builtin_va_start(v, l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)
#define va_copy(d, s) __builtin_va_copy(d, s)

#endif

#if !defined(__LIBC_GUARDLESS_INCLUDE)
#define _STDARG_H 1
#endif

#endif
