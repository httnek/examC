#include<stdio.h>
int main(void){
    struct person{
        char name[20];
        int birth;
    };
    struct person x = {"ekkusu", 19201102};
    struct person *p = &x;
    struct person y;

    y = x;
    printf("%s\n", p -> name);
    printf("%d\n", p -> birth);
    return 0;
}