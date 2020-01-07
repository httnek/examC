#include <stdio.h>
struct student{
  char name[10];
  int id;
  int score;
  char mark;//成績をいれる．A or D
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
    scanf ("%d", &CS[i].score);
  }
  sum = 0;//足し込んで行くので，0に初期化
  for(i=0; i<3; i++){
    sum += CS[i].score;
  }
  ave = (double)sum / 3;
  printf("average = %f\n", ave);

  for(i=0; i<3; i++){
    if(CS[i].score >= ave){
      CS[i].mark = 'A';
    } else {
      CS[i].mark = 'D';
    }
  }

  for(i=0; i<3; i++){
    printf("name: %s,\t score: %d,\t mark: %c\n", (CS + i) -> name, (*(CS+ i)).score, CS[i].mark);
  }
  
  return 0;
}