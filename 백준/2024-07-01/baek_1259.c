#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char n[6];
    while(1){
        scanf("%s", n);
        if(atoi(n) == 0) break;
        int length = strlen(n), count = 0;
        for(int i = 0; i < length/2; i++){
            if(n[i] == n[length-1-i]){
                count++;
            }
        }
        if(count >= length/2) printf("yes\n");
        else printf("no\n");
    }
}