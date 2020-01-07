#include <stdio.h>
int fact(int);
int main(void){
    int n, r, comb;
   printf("組み合わせ\n");
    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);
    printf("%d! = %d\n", n, fact(n));

    comb = fact(n) / (fact(r) * fact(n-r));
    printf("%d\n", comb);

    return 0;
}
int fact(int n){
    int m;
    if(n == 0){
        return 1;
    }
    m = fact(n - 1);
    return n * m;
}