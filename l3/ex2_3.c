#include<stdio.h>
int main(int argc, char *argv[]){
    int code[6];
    int i, a, b, c, pass, login;
    i = 0; 
    while(argv[1][i]){
    printf("%d\n", argv[1][i]);
    code[i] = argv[1][i];
    i++;
    }

    a = code[0] + code[2] + code[4];
    b = a * code[1];
    c = b - code[3];
    pass = c / code[5];

    printf("password : ");
    scanf("%d", &login);
    if(login == pass){
        printf("you are logged in\n");
    }else{
        printf("%dfailed\n", pass);
    }
    return 0;
}