#include <stdio.h>
#include <math.h>// for sqrt, pow, atan -->
//コンパイラが古いバージョンの場合は：gcc hoge.c -lm (-lmがmath.hを使う場合）
struct complex{
  double re;//実部
  double im;//虚部
};//一番最後はセミコロン！

int doAdd(struct complex z, struct complex w, struct complex *add){
      add->re = z.re + w.re;
      add->im = z.im + w.im;
    return 0;
}
int main(void){
  struct complex z, w, add, sub, multi;//z = re + im*i,
  double abs_result, arg;

  printf("input real part of z: ");
  scanf ("%lf", &z.re);
  printf("input imaginary part of z: ");
  scanf ("%lf", &z.im);
  printf("input real part of w: ");
  scanf ("%lf", &w.re);
  printf("input imaginary part of w: ");
  scanf ("%lf", &w.im);

  abs_result = sqrtf(z.re * z.re + z.im * z.im);//z.re*z.re = pow(z.re, 2)
  //絶対値の表示はしてね
  // tan(θ) = y/x --> θ = atan(y/x)

  arg = atan(z.im/z.re);
  doAdd(z, w, &add);
  printf("足し算:(%f) + (%f) i\n", add.re, add.im);
  
  doSub(z, w, &sub);
  printf("引き算:(%f) + (%f) i\n", add.re, add.im);
  doMulti(z, w, &multi);
  printf("掛け算:(%f) + (%f) i\n", add.re, add.im);
  
  return 0;
}