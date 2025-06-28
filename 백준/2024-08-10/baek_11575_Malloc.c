#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int a, b;
    char s[1000000];
    char cipher[1000000];
    // char* s;
    // s = (char *)malloc(sizeof(char) * 1000000);
    // char* cipher;
    // cipher = (char *)malloc(sizeof(char) * 1000000);
    for(int i = 0; i < n; i++){
        s[0] = '\0';
        cipher[0] = '\0';
        scanf("%d %d", &a, &b);
        scanf("%s", s);
        for(int j = 0; j < 1000000; j++){
            if(s[j] == '\0') break;
            cipher[j] = (a*(s[j] - 'A') + b) % 26 + 'A';
            cipher[j+1] = '\0';
        }
        printf("%s\n", cipher);
    }
    // free(s);
    // free(cipher);
}