#include <stdio.h>

int main(){
    char s[101];
    scanf("%s", &s);
    int a[26] = {0};
    for(int k = 0; k < 26; k++){
        a[k] = -1;
    }
    for(int k = 0; k < 100; k++){
        if(a[s[k]-'a'] == -1){
            a[s[k]-'a'] = k;
        }
        if(s[k] == '\0'){
            break;
        }
    }
    for(int k = 0; k < 26; k++){
        printf("%d ", a[k]);
    }
}