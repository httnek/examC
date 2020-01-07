#include<stdio.h>
int main(void){
    struct person{
        char name[20];
        int birth;
    };
    struct person x = {"ekkusu", 19201102};
    struct person y;

    y = x;
    printf("%s\n", y.name);
    printf("%d\n", y.birth);
    return 0;
}