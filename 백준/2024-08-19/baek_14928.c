#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char *num;
    num = (char*)malloc(sizeof(char)*1000001);
    scanf("%s", num);
    int r=0;
    int i=0;
    while(num[i] != '\0'){
        r = (r*10 + (num[i]-'0')) % 20000303;
        i++;
    }
    printf("%d", r);
    free(num);
}