#include<stdio.h>
struct student{
    char name[20];
    int number;
    int score;
};

int main(void){
    struct student ikuno = {"Soichiro", 10, 55};
    struct student hoge;

    printf("name = %s\n", ikuno.name);
    printf("number = %d\n", ikuno.number);

    hoge = ikuno;

    printf("name = %s\n", hoge.name);
    hoge.score = 100;;
    printf("number = %d\n", ikuno.score);
    return 0;
}