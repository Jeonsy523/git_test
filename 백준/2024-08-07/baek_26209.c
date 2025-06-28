#include <stdio.h>

int main(){
    int a[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 8; i++){
        if(a[i] == 9){
            printf("F");
            return 0;
        }
    }
    printf("S");
}