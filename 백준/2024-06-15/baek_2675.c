#include <stdio.h>

int main(){
    int n, a;
    scanf("%d", &n);
    char s[20];
    for(int i = 0; i < n; i++){
        scanf("%d %s", &a, s);
        for(int k = 0; s[k] != '\0'; k++){
            for(int j = 0; j < a; j++){
                printf("%c", s[k]);
            }
        }
        printf("\n");
    }
}