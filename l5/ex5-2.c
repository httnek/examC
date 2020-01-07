#include <stdio.h>
typedef struct {
    int number;
    char name[50];
} student;
void set_deta(student *a){
    a[0].number = 333;
    a[1].number = 567;
    a[2].number = 123;
    for(int i = 0; i < 3; i++){
        scanf("%s", a[i].name); 
    }
    //scanf("%s", a->name);
    //a[0].name = "Taro";
    //a[1]->name = 'Jiro';
    //a[2]->name = 'Hinako';
}
void bubsort(student *x, int n){
  student tmp;
  int i, j;
  char ntmp[10];

  for (i = 0; i < n - 1; i++) {
    for (j = n-1; j>i; j--) {
      if ((x + j-1)->number > (x + j)->number){
	tmp = *(x + j);
	*(x + j) = *(x + j-1);
	*(x + j-1) = tmp;
      }
    }
  }
}

int main(void){
    student a[3];
    set_deta(a);
    bubsort(a, 3);

    for(int i = 0; i < 3; i++){
    printf("number:%d\n", a[i].number);
    printf("name:%s\n", a[i].name);
    }
    
    return 0;
}