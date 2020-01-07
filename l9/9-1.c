#include <stdio.h>
#include <stdlib.h>
struct station{
  char name[20];
  char rapid;
  struct station *next;
};

struct station *read_station(FILE *fp){
  struct station *new, *stop, *head, tmp;
  char dummy;

  new = (struct station *)malloc(sizeof(struct station));
  fscanf(fp, "%[^,],%c%*c", new->name, &new->rapid);//%*cで改行の読み飛ばし
  //始発駅だけ別扱い
  head = new;//headに始発駅を入力
  stop = new;//現在止まっている駅名を入力
  while ((fscanf(fp, "%[^,],%c%*c", tmp.name, &tmp.rapid)) != EOF){
    //いったん読み込んで，tmpに入力したのち，下で動的にメモリ確保
    new = (struct station *)malloc(sizeof(struct station));
    *new = tmp;//動的に確保した領域に情報を入力
    stop->next = new;//前の駅との接続
    stop = new;//止まっている駅を進める
  }
  stop->next = NULL;//一番最後なので，終点の意味でNULLをいれる
  return(head);//始発駅のポインタを返す
}

int main(void){
  FILE *fp;
  struct station *shihatsu_eki, *train;

  if((fp = fopen("station.csv", "r")) == NULL){
    fprintf(stderr, "File station.csv does not exist.\n");
    exit(1);
  }
  shihatsu_eki = read_station(fp);
  train = shihatsu_eki;

  while(train != NULL){
    printf("station: %s\t rapid: %c\n", train->name, train->rapid);
    train = train->next;
  }
  return 0;
}