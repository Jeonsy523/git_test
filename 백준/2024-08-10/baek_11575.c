#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int a, b;
    char s[1000001];
    char cipher[1000001];
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
}