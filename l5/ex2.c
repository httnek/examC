#include<stdio.h>
struct complex{
double re;
double im;
};

void func(struct complex *x)
{
x->re=2*x->re;
x->im=2*x->im;
printf("2x=%3.1f + %3.1f i\n", x->re, x->im);
}
int main(void)
{
struct complex a={1,2},b;
func(&a);
b=a;
printf("a=%3.1f + %3.1f i\n",a.re,a.im);
printf("b=%3.1f + %3.1f i\n",b.re,b.im);
return 0;
}