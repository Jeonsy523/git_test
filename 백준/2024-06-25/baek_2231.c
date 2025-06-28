#include <stdio.h>

int main(){
    int n, i;
    int min;
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        min = i;
        for(int k = 10; k <= i*10; k*=10){
            min += (i%k)/(k/10);
            //printf("%d\n", min);
        }
        if(min == n) break;
    }
    if(i == n){
        printf("%d", 0);
    }else{
        printf("%d", i);
    }
}