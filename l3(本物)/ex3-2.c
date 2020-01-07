#include<stdio.h>
struct person{
    char name[10];
    int birth;
};
int main(void){
    struct person x = {"ikuno", 19701111}, y, z;
    y = x;
    printf("name?");
    scanf("%s", z.name);
    printf("birth?");
    scanf("%d", &z.birth);
    printf("name = %s birth = %d\n", z.name, z.birth);
}