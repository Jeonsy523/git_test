#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char str[n][51];
    char tmp[50];
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = 0 ; j < n-1; j++){
            if(strcmp(str[i], str[j]) < 0){
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0 ; j < n-1; j++){
            if(strlen(str[i]) < strlen(str[j])){
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%s\t", str[i]);
    }
}