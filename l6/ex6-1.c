#include <stdio.h>
typedef struct {
    int number;
    char name[50];
} student;

int main(void){
    student class_a;
    student *p;
    int nd = 0;
    FILE *fp;
      int n_data;//レコード数をカウントする用
  if((fp = fopen("meibo.txt", "r")) == NULL){
    printf("meibo2.txt cannot opned\n");
    return 1;
  }

    fp = fopen("meibo.txt", "r");
    while(fscanf(fp, "%*d %*f") != EOF){
        nd++;
    }
    fscanf(fp, "%d%s", &class_a.number, class_a.name);
    printf("%d%s\n", class_a.number, class_a.name);
    fclose(fp);

    return 0;
}