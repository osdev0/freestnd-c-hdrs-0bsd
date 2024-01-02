/* Copyright (C) 2022-2024 mintsuki and contributors.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#if !defined(__FSTD_HDRS_STDBOOL_H) || defined(__FSTD_HDRS_CXX_WRAP)
#if !defined(__FSTD_HDRS_CXX_WRAP)
#define __FSTD_HDRS_STDBOOL_H 1
#endif

#ifndef __cplusplus
#  undef bool
#  define bool _Bool

#  undef true
#  define true 1
#  undef false
#  define false 0
#endif

#undef __bool_true_false_are_defined
#define __bool_true_false_are_defined 1

#endif
