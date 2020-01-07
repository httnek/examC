#include <stdio.h>
struct data{
    int score;
    char mark;
};
struct student{
  char name[10];
  int id;
  struct data d1;
};
int main(void){
  struct student CS[3];//CS[0], CS[1], CS[2]が使える
  double ave; //平均の計算用
  int i, sum; //iはループ，sumは点数のtotal --> ave = (double)total / 3;

  for(i=0; i<3; i++){
    printf("Input name of CS[%d]: ", i);
    scanf ("%s", CS[i].name);
    printf("Input ID of CS[%d]: ", i);
    scanf ("%d", &CS[i].id);
    printf("Input score of CS[%d]: ", i);
    scanf ("%d", &CS[i].d1.score);
  }
  sum = 0;//足し込んで行くので，0に初期化
  for(i=0; i<3; i++){
    sum += CS[i].d1.score;
  }
  ave = (double)sum / 3;
  printf("average = %f\n", ave);

  for(i=0; i<3; i++){
    if(CS[i].d1.score >= ave){
      CS[i].d1.mark = 'A';
    } else {
      CS[i].d1.mark = 'D';
    }
  }

  for(i=0; i<3; i++){
    printf("name: %s,\t score: %d,\t mark: %c\n", (CS + i) -> name, (*(CS+ i)).d1.score, CS[i].d1.mark);
  }
  
  return 0;
}