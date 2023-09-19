/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tu(vfloat16mf4_t maskedoff, vint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tu(vfloat16mf2_t maskedoff, vint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tu(vfloat16m1_t maskedoff, vint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tu(vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tu(vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tu(vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tu(vfloat16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tu(vfloat16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tu(vfloat16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tu(vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tu(vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tu(maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tu(vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tu(vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tu(vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tu(vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tu(vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tu(maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tu(vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tu(vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tu(vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tu(vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tu(vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tu(maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tu(vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tu(vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tu(vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tu(vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tu(vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tu(vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tu(vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tu(vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tu(vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tu(vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tu(vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tu(vfloat32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tu(vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tu(vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tu(vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tu(maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tu(vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tu(maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tu(vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tu(maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tu(vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tu(maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tu(vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tu(vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tu(vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tu(vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tu(vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tu(vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tu(vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tu(vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tu(vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tu(vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tu(vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tu(vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tu(vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tum(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tum(vbool2_t mask, vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tum(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tum(vbool2_t mask, vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tum(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tum(mask, maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tum(mask, maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tum(mask, maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tum(mask, maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tum(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tum(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tum(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tum(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tum(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tum(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tum(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tum(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tum(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tum(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tum(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tum(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tum(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tumu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tumu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tumu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tumu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tumu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tumu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tumu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_mu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_mu(vbool2_t mask, vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_mu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_mu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_mu(vbool2_t mask, vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_mu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_mu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_mu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_mu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_mu(mask, maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_mu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_mu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_mu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_mu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_mu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_mu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_mu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_mu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_mu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_mu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_mu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_mu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_mu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_mu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_mu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_mu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_mu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tu(vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tu(vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tu(vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tu(vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tu(vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tu(vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tu(vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tu(vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tu(vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tu(vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tu(vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tu(vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tu(vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tu(vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tu(vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tu(vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tu(vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tu(vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tum(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tum(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tum(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tum(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tum(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tum(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tum(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tum(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tum(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tum(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tum(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tum(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tum(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tum(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tumu(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tumu(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tumu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tumu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tumu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tumu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_mu(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_mu(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_mu(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_mu(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_mu(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_mu(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_mu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_mu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_mu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_mu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_mu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_mu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_mu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_mu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.[ivxfswum.]+\s+} 300 } } */