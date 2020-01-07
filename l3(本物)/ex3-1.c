#include<stdio.h>
struct person{
    char name[10];
    int birth;
};
int main(void){
    struct person x = {"ikuno", 19701111}, y;
    y = x;

    printf("name = %s birth = %d\n", y.name, y.birth);
}