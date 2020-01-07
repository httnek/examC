#include <stdio.h>
int main (void){
    FILE *fp;
    fp = fopen("data.txt", "w");

    fprintf(fp, "abcde\n");
    fprintf(fp, "efgh\n");

    fclose(fp);

    fp = fopen("data.txt", "a");

    fprintf(fp, "abcde\n");

    fclose(fp);
}