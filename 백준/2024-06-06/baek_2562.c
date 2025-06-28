#include <stdio.h>

int main(){
    int a[9];
    int max=0;
    int max_n;
    for(int i = 0; i < 9; i++){
        scanf("%d", &a[i]);
        if(a[i]>max){
            max = a[i];
            max_n = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_n);
}