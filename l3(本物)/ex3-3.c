#include<stdio.h>
#include<math.h>

struct complex{
    double re;
    double im;
};
int main(void){
    struct complex a, b;
    printf("a?\n");
    scanf("%lf %lf", &a.re, &a.im);
    printf("b?\n");
    scanf("%lf %lf", &b.re, &b.im);
    printf("a + b = %lf + %lfi\n",
    a.re + b.re, a.im + b.im);
    printf("a - b = %lf + %lfi\n",
    a.re - b.re, a.im - b.im);
    printf("a * b = %lf + %lfi\n",
    a.re*b.re-(a.im*b.im), a.re*b.im+a.im*b.re);
    printf("a / b = %lf + %lfi\n",
    (a.re*b.re+a.im*b.im)/(b.re*b.re+b.im*b.im),
    (a.re*b.im+a.im*b.re)/(b.re*b.re+b.im*b.im));
    printf("absA = √%lf\n", a.re*a.re+a.im*a.im);
    printf("absB = √%lf\n", b.re*b.re+b.im*b.im);
    return 0;
} 