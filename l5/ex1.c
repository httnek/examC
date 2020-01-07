#include<stdio.h>

struct complex{
    double re;
    double im;
};

void func(struct complex *x, struct complex *y)
{
    y->re = 2*x->re;
    y->re = 2*x->im;
    printf("wx=%3.1f + %3.1f i\n", y->re, y->im);
}

int main(void){
    struct complex a = {1,2},b;
    func(&a, &b);
    printf("a=%3.1f + %3.1f i\n", a.re, a.im);
    printf("b=%3.1f + %3.1f i\n", b.re, b.im);
}