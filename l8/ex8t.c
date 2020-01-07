#include<stdio.h>
#include<string.h>
struct station{
    char name[256];
    char rapid;
    struct station *next;
};
int main (void){
    struct station st0, st1, st2, st3, st4, st5, st6, st7, st8;
    st0 = (struct station){"Hachioji", 'y', &st1};
    st1 = (struct station){"Katakura", 'y', &st2};
    st2 = (struct station){"Hashimoto", 'y',&st3};
    st3 = (struct station){"Sagamihara", 'y', &st4};
    st4 = (struct station){"Yabe", 'n', &st5};
    st5 = (struct station){"Fuchinobe", 'n', &st6};
    st6 = (struct station){"Kobuchi", 'n', &st7};
    st7 = (struct station){"Machida", 'y', NULL};
    struct station *stop = &st0;
    char stname[256];
    new_station = (struct station *)malloc(sizeof(struct station));

    scanf("%s", stname);
    
    
    while(stop != NULL){
        //printf("%s,%c\n", stop->name, stop->rapid);
        if(strcmp(stop->name, stname) == 0){
            if(stop->rapid == 'y'){
                printf("%s tomaru\n", stname);
            }else{
                printf("%s tomaranai\n", stname);
            }
            break;
        }
        stop = stop->next;
    }
    if(stop == NULL){
        printf("station is not found.\n");
    }

    return 0;
}