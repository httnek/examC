#include <stdio.h>
typedef struct {
    int number;
    char name[50];
} student;

int main(void){
    student class_a[10];
    student *p;
    p = &class_a[10];
    FILE *fp;
    int n = 0;
    fp = fopen("meibo.txt", "r");
    while(fscanf(fp, "%d%s", &p[n].number, p[n].name) != EOF){
        printf("%d%s\n", p[n].number, p[n].name);
        n++;
    }
    fclose(fp);
       //printf("%d\n", p[1].number);

    return 0;
}