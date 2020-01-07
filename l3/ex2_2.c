#include<stdio.h>
int comb(int, int);
int main(void){
    int n, r;
   printf("組み合わせ\n");
    printf("n = ");
    scanf("%d", &n);
    printf("r = ");
    scanf("%d", &r);

    printf("%d\n", comb(n, r));
    return 0;
}

int comb(int n, int r){
    if(n == 0){
        return 1;
    }
    else if(r == 0){
        return 1;
    }
    else if(n == r){
        return 1;
    }
    else{
        return comb(n-1, r) + comb(n-1, r-1);
    }
}