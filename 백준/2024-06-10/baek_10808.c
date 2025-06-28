#include <stdio.h>

int main(){
    char s[100];
    int a[26] = {0};
    scanf("%s", s);

    for(int i = 0; i < 100; i++){
        a[s[i]-'a']++;
        if(s[i] == '\0'){
            break;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%d ", a[i]);
    }
}