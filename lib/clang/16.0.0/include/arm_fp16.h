/*===---- arm_fp16.h - ARM FP16 intrinsics ---------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_FP16_H
#define __ARM_FP16_H

#include <stdint.h>

typedef __fp16 float16_t;
#define __ai static __inline__ __attribute__((__always_inline__, __nodebug__))

#if defined(__ARM_FEATURE_FP16_SCALAR_ARITHMETIC) && defined(__aarch64__)
__ai float16_t vabdh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vabdh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vabsh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vabsh_f16(__p0);
  return __ret;
}
__ai float16_t vaddh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vaddh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcageh_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcageh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcagth_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcagth_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcaleh_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcaleh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcalth_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcalth_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vceqh_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vceqh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vceqzh_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vceqzh_f16(__p0);
  return __ret;
}
__ai uint16_t vcgeh_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcgeh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcgezh_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcgezh_f16(__p0);
  return __ret;
}
__ai uint16_t vcgth_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcgth_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcgtzh_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcgtzh_f16(__p0);
  return __ret;
}
__ai uint16_t vcleh_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcleh_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vclezh_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vclezh_f16(__p0);
  return __ret;
}
__ai uint16_t vclth_f16(float16_t __p0, float16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vclth_f16(__p0, __p1);
  return __ret;
}
__ai uint16_t vcltzh_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcltzh_f16(__p0);
  return __ret;
}
#define vcvth_n_s16_f16(__p0, __p1) __extension__ ({ \
  int16_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (int16_t) __builtin_neon_vcvth_n_s16_f16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_s32_f16(__p0, __p1) __extension__ ({ \
  int32_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (int32_t) __builtin_neon_vcvth_n_s32_f16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_s64_f16(__p0, __p1) __extension__ ({ \
  int64_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (int64_t) __builtin_neon_vcvth_n_s64_f16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_u16_f16(__p0, __p1) __extension__ ({ \
  uint16_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (uint16_t) __builtin_neon_vcvth_n_u16_f16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_u32_f16(__p0, __p1) __extension__ ({ \
  uint32_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (uint32_t) __builtin_neon_vcvth_n_u32_f16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_u64_f16(__p0, __p1) __extension__ ({ \
  uint64_t __ret; \
  float16_t __s0 = __p0; \
  __ret = (uint64_t) __builtin_neon_vcvth_n_u64_f16(__s0, __p1); \
  __ret; \
})
__ai int16_t vcvth_s16_f16(float16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vcvth_s16_f16(__p0);
  return __ret;
}
__ai int32_t vcvth_s32_f16(float16_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvth_s32_f16(__p0);
  return __ret;
}
__ai int64_t vcvth_s64_f16(float16_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvth_s64_f16(__p0);
  return __ret;
}
__ai uint16_t vcvth_u16_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcvth_u16_f16(__p0);
  return __ret;
}
__ai uint32_t vcvth_u32_f16(float16_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvth_u32_f16(__p0);
  return __ret;
}
__ai uint64_t vcvth_u64_f16(float16_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvth_u64_f16(__p0);
  return __ret;
}
__ai int16_t vcvtah_s16_f16(float16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vcvtah_s16_f16(__p0);
  return __ret;
}
__ai int32_t vcvtah_s32_f16(float16_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtah_s32_f16(__p0);
  return __ret;
}
__ai int64_t vcvtah_s64_f16(float16_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtah_s64_f16(__p0);
  return __ret;
}
__ai uint16_t vcvtah_u16_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcvtah_u16_f16(__p0);
  return __ret;
}
__ai uint32_t vcvtah_u32_f16(float16_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtah_u32_f16(__p0);
  return __ret;
}
__ai uint64_t vcvtah_u64_f16(float16_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtah_u64_f16(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_u16(uint16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_u16(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_s16(int16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_s16(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_u32(uint32_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_u32(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_s32(int32_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_s32(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_u64(uint64_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_u64(__p0);
  return __ret;
}
__ai float16_t vcvth_f16_s64(int64_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vcvth_f16_s64(__p0);
  return __ret;
}
#define vcvth_n_f16_u32(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  uint32_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_u32(__s0, __p1); \
  __ret; \
})
#define vcvth_n_f16_s32(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  int32_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_s32(__s0, __p1); \
  __ret; \
})
#define vcvth_n_f16_u64(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  uint64_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_u64(__s0, __p1); \
  __ret; \
})
#define vcvth_n_f16_s64(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  int64_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_s64(__s0, __p1); \
  __ret; \
})
#define vcvth_n_f16_u16(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  uint16_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_u16(__s0, __p1); \
  __ret; \
})
#define vcvth_n_f16_s16(__p0, __p1) __extension__ ({ \
  float16_t __ret; \
  int16_t __s0 = __p0; \
  __ret = (float16_t) __builtin_neon_vcvth_n_f16_s16(__s0, __p1); \
  __ret; \
})
__ai int16_t vcvtmh_s16_f16(float16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vcvtmh_s16_f16(__p0);
  return __ret;
}
__ai int32_t vcvtmh_s32_f16(float16_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtmh_s32_f16(__p0);
  return __ret;
}
__ai int64_t vcvtmh_s64_f16(float16_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtmh_s64_f16(__p0);
  return __ret;
}
__ai uint16_t vcvtmh_u16_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcvtmh_u16_f16(__p0);
  return __ret;
}
__ai uint32_t vcvtmh_u32_f16(float16_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtmh_u32_f16(__p0);
  return __ret;
}
__ai uint64_t vcvtmh_u64_f16(float16_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtmh_u64_f16(__p0);
  return __ret;
}
__ai int16_t vcvtnh_s16_f16(float16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vcvtnh_s16_f16(__p0);
  return __ret;
}
__ai int32_t vcvtnh_s32_f16(float16_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtnh_s32_f16(__p0);
  return __ret;
}
__ai int64_t vcvtnh_s64_f16(float16_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtnh_s64_f16(__p0);
  return __ret;
}
__ai uint16_t vcvtnh_u16_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcvtnh_u16_f16(__p0);
  return __ret;
}
__ai uint32_t vcvtnh_u32_f16(float16_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtnh_u32_f16(__p0);
  return __ret;
}
__ai uint64_t vcvtnh_u64_f16(float16_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtnh_u64_f16(__p0);
  return __ret;
}
__ai int16_t vcvtph_s16_f16(float16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vcvtph_s16_f16(__p0);
  return __ret;
}
__ai int32_t vcvtph_s32_f16(float16_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtph_s32_f16(__p0);
  return __ret;
}
__ai int64_t vcvtph_s64_f16(float16_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtph_s64_f16(__p0);
  return __ret;
}
__ai uint16_t vcvtph_u16_f16(float16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vcvtph_u16_f16(__p0);
  return __ret;
}
__ai uint32_t vcvtph_u32_f16(float16_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtph_u32_f16(__p0);
  return __ret;
}
__ai uint64_t vcvtph_u64_f16(float16_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtph_u64_f16(__p0);
  return __ret;
}
__ai float16_t vdivh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vdivh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vfmah_f16(float16_t __p0, float16_t __p1, float16_t __p2) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vfmah_f16(__p0, __p1, __p2);
  return __ret;
}
__ai float16_t vfmsh_f16(float16_t __p0, float16_t __p1, float16_t __p2) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vfmsh_f16(__p0, __p1, __p2);
  return __ret;
}
__ai float16_t vmaxh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vmaxh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vmaxnmh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vmaxnmh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vminh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vminh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vminnmh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vminnmh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vmulh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vmulh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vmulxh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vmulxh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vnegh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vnegh_f16(__p0);
  return __ret;
}
__ai float16_t vrecpeh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrecpeh_f16(__p0);
  return __ret;
}
__ai float16_t vrecpsh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrecpsh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vrecpxh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrecpxh_f16(__p0);
  return __ret;
}
__ai float16_t vrndh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndh_f16(__p0);
  return __ret;
}
__ai float16_t vrndah_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndah_f16(__p0);
  return __ret;
}
__ai float16_t vrndih_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndih_f16(__p0);
  return __ret;
}
__ai float16_t vrndmh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndmh_f16(__p0);
  return __ret;
}
__ai float16_t vrndnh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndnh_f16(__p0);
  return __ret;
}
__ai float16_t vrndph_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndph_f16(__p0);
  return __ret;
}
__ai float16_t vrndxh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrndxh_f16(__p0);
  return __ret;
}
__ai float16_t vrsqrteh_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrsqrteh_f16(__p0);
  return __ret;
}
__ai float16_t vrsqrtsh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vrsqrtsh_f16(__p0, __p1);
  return __ret;
}
__ai float16_t vsqrth_f16(float16_t __p0) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vsqrth_f16(__p0);
  return __ret;
}
__ai float16_t vsubh_f16(float16_t __p0, float16_t __p1) {
  float16_t __ret;
  __ret = (float16_t) __builtin_neon_vsubh_f16(__p0, __p1);
  return __ret;
}
#endif

#undef __ai

#endif /* __ARM_FP16_H */
