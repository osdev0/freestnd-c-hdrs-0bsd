#if !defined(__FSTD_HDRS_STDALIGN_H) || defined(__FSTD_HDRS_CXX_WRAP)
#if !defined(__FSTD_HDRS_CXX_WRAP)
#define __FSTD_HDRS_STDALIGN_H 1
#endif

#ifndef __FSTD_HDRS_STDALIGN_H_MACROS
#define __FSTD_HDRS_STDALIGN_H_MACROS 1

#ifndef __cplusplus
#  undef alignas
#  define alignas _Alignas
#  undef alignof
#  define alignof _Alignof

#  undef __alignof_is_defined
#  define __alignof_is_defined 1
#  undef __alignas_is_defined
#  define __alignas_is_defined 1
#endif

#endif

#endif
