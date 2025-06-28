#include <stdio.h>

int main(){
    int n, c = 0;
    scanf("%d", &n);
    if(n == 1){
        printf("%d", 1);
        return 0;
    }
    n--;
    for(int sum = 0; n>0; sum+=6){
        n-=sum;
        c++;
    }
    printf("%d", c);
}