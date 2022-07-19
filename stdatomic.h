#ifndef __STDATOMIC_H__
#define __STDATOMIC_H__ 1

#include <stdint.h>

#ifndef __ATOMIC
#   define __ATOMIC volatile
#endif

typedef __ATOMIC _Bool atomic_bool;

typedef __ATOMIC char atomic_char;
typedef __ATOMIC signed char atomic_schar;
typedef __ATOMIC unsigned char atomic_uchar;
typedef __ATOMIC short atomic_short;
typedef __ATOMIC unsigned short atomic_ushort;
typedef __ATOMIC int atomic_int;
typedef __ATOMIC unsigned int atomic_uint;
typedef __ATOMIC long atomic_long;
typedef __ATOMIC unsigned long atomic_ulong;
typedef __ATOMIC long long atomic_llong;
typedef __ATOMIC unsigned long long atomic_ullong;

#ifdef __CHAR16_TYPE__
typedef __ATOMIC __CHAR16_TYPE__ atomic_char16_t;
#endif
#ifdef __CHAR32_TYPE__
typedef __ATOMIC __CHAR32_TYPE__ atomic_char32_t;
#endif
#ifdef __WCHAR_TYPE__
typedef __ATOMIC __WCHAR_TYPE__ atomic_wchar_t;
#endif

#ifdef __INT_LEAST8_TYPE__
typedef __ATOMIC __INT_LEAST8_TYPE__ atomic_int_least8_t;
#endif
#ifdef __INT_LEAST16_TYPE__
typedef __ATOMIC __INT_LEAST16_TYPE__ atomic_int_least16_t;
#endif
#ifdef __INT_LEAST32_TYPE__
typedef __ATOMIC __INT_LEAST32_TYPE__ atomic_int_least32_t;
#endif
#ifdef __INT_LEAST64_TYPE__
typedef __ATOMIC __INT_LEAST64_TYPE__ atomic_int_least64_t;
#endif
#ifdef __INT_FAST8_TYPE__
typedef __ATOMIC __INT_FAST8_TYPE__ atomic_int_fast8_t;
#endif
#ifdef __INT_FAST16_TYPE__
typedef __ATOMIC __INT_FAST16_TYPE__ atomic_int_fast16_t;
#endif
#ifdef __INT_FAST32_TYPE__
typedef __ATOMIC __INT_FAST32_TYPE__ atomic_int_fast32_t;
#endif
#ifdef __INT_FAST64_TYPE__
typedef __ATOMIC __INT_FAST64_TYPE__ atomic_int_fast64_t;
#endif

#ifdef __INTPTR_TYPE__
typedef __ATOMIC __INTPTR_TYPE__ atomic_intptr_t;
#endif
#ifdef __UINTPTR_TYPE__
typedef __ATOMIC __UINTPTR_TYPE__ atomic_uintptr_t;
#endif

#ifdef __INTMAX_TYPE__
typedef __ATOMIC __INTMAX_TYPE__ atomic_intmax_t;
#endif
#ifdef __UINTMAX_TYPE__
typedef __ATOMIC __UINTMAX_TYPE__ atomic_uintmax_t;
#endif

enum memory_order {
    memory_order_relaxed = __ATOMIC_RELAXED,
    memory_order_consume = __ATOMIC_CONSUME,
    memory_order_acquire = __ATOMIC_ACQUIRE,
    memory_order_release = __ATOMIC_RELEASE,
    memory_order_acq_rel = __ATOMIC_ACQ_REL,
    memory_order_seq_cst = __ATOMIC_SEQ_CST,
};

/* unimplemented features */
#pragma GCC poison atomic_flag_test_and_set
#pragma GCC poison atomic_flag_test_and_set_explicit
#pragma GCC poison atomic_flag_clear
#pragma GCC poison atomic_flag_clear_explicit
#pragma GCC poison atomic_init
#pragma GCC poison atomic_is_lock_free

#define atomic_store_explicit(obj, desired, order) __atomic_store_n(obj, desired, order)
#define atomic_store(obj, desired) atomic_store_explicit(obj, desired, memory_order_seq_cst)

#define atomic_load_explicit(obj, order) __atomic_load_n(obj, order)
#define atomic_load(obj) atomic_load_explicit(obj, memory_order_seq_cst)

#pragma GCC poison atomic_exchange
#pragma GCC poison atomic_exchange_explicit
#pragma GCC poison atomic_compare_exchange_strong
#pragma GCC poison atomic_compare_exchange_strong_explicit
#pragma GCC poison atomic_compare_exchange_weak
#pragma GCC poison atomic_compare_exchange_weak_explicit

#define atomic_fetch_add_explicit(obj, arg, order) __atomic_fetch_add(obj, arg, order)
#define atomic_fetch_add(obj, arg) atomic_fetch_add_explicit(obj, arg, memory_order_seq_cst)

#define atomic_fetch_sub_explicit(obj, arg, order) __atomic_fetch_sub(obj, arg, order)
#define atomic_fetch_sub(obj, arg) atomic_fetch_sub_explicit(obj, arg, memory_order_seq_cst)

#define atomic_fetch_or_explicit(obj, arg, order) __atomic_fetch_or(obj, arg, order)
#define atomic_fetch_or(obj, arg) atomic_fetch_or_explicit(obj, arg, memory_order_seq_cst)

#define atomic_fetch_xor_explicit(obj, arg, order) __atomic_fetch_xor(obj, arg, order)
#define atomic_fetch_xor(obj, arg) atomic_fetch_xor_explicit(obj, arg, memory_order_seq_cst)

#define atomic_fetch_and_explicit(obj, arg, order) __atomic_fetch_and(obj, arg, order)
#define atomic_fetch_and(obj, arg) atomic_fetch_and_explicit(obj, arg, memory_order_seq_cst)

#pragma GCC poison atomic_thread_fence
#pragma GCC poison atomic_signal_fence

#endif
