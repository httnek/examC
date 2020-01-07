#include <stdio.h>
struct student {
    int number;
    char name[10];
};
void set_deta(struct student *x){
    printf("number?");
    scanf("%d", &(x->number));
    printf("name?");
    scanf("%s", x->name);
}
int main(void){
    struct student x, y;
    set_deta(&x);
    printf("number:%d\n", x.number);
    printf("name:%s\n", x.name);
    return 0;
}