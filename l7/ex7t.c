#include<stdio.h>
struct station{
    char name[256];
    char rapid;
    struct station *next;
}
int main (void){
    struct station st0, st1, st2, st3, st4, st5, st6, st7, st8;
    st0 = (struct station){"Hachioju", 'y', &st1};
    st1 = (struct station){"Katakura", 'n', &st2};
    st2 = (struct station){"Hashimoto", 'y',&st3};
    st3 = (struct station){"Sagamihara", 'y', &st4};
    st4 = (struct station){"Yabe", 'y', &st5};
    st5 = (struct station){"Fuchinobe", 'y', &st6};
    st6 = (struct station){"Kobuchi", 'y', &st7};
    st7 = (struct station){"Machida", 'y', &NULL};
    return 0;
}