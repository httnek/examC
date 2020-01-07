#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
struct person{
    char name[10];
    struct date d1;
};
int main(void){
    struct person z = {"ikuno", 0};
    struct person *zp;
    zp = &z;
    printf("name?");
    scanf("%s", zp->name);
    printf("year?");
    scanf("%d", &(zp->d1).year);
    printf("month?");
    scanf("%d", &(zp->d1).month);
    printf("day?");
    scanf("%d", &(zp->d1).day);
    printf("name = %s\nbirth = %d%d%d\n", zp->name, (zp->d1).year, (zp->d1).month, (zp->d1).day);
}