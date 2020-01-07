#include<stdio.h>
struct person{
    char name[10];
    int birth;
};
int main(void){
    struct person x = {"ikuno", 19701111};
    struct person *zp;
    zp = &x;
    printf("name?");
    scanf("%s", zp->name);
    printf("birth?");
    scanf("%d", &zp->birth);
    printf("name = %s\nbirth = %d\n", zp->name, zp->birth);
}