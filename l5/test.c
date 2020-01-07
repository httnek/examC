#include<stdio.h>
int add(int a, int b){
    return a + b;
}
int main(void){
    int a, b;
    printf("a?");
    scanf("%d", &a);
    printf("b?");
    scanf("%d", &b);
    printf("%d\n", add(a, b));
    return 0;
}