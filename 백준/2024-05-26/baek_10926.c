#include <stdio.h>
#include <string.h>

int main(){
    char ID[100];
    char s[5] = "\?\?!";
    scanf("%s", ID);
    strcat(ID, s);
    printf("%s", ID);

    return 0;
}