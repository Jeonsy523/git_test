#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare1(const void* a, const void* b){
    if(strlen((char *)a) == strlen((char *)b))
        return strcmp((char *)a, (char *)b);
    else
        return strlen((char *)a) >= strlen((char *)b) ? 1 : -1;
}

int main(){
    int n;
    scanf("%d", &n);
    char str[n][51];
    for(int i = 0; i < n; i++){
        scanf("%s", str[i]);
    }

    qsort(str, n, sizeof(str[0]), compare1);
    
    for(int i=0; i<n; i++){
        if(strcmp(str[i], str[i+1]) != 0)
            printf("%s\n", str[i]);
    }
}