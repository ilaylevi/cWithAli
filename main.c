#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("txt.txt","w");
    fprintf(fp,"Hello There");
    char s[80];
    fclose(fp);
    fp = fopen("txt.txt","r");
    fgets(s,13,fp);
    printf("%s",s);
}
