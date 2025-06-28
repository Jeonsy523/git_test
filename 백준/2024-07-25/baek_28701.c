#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i=1; i<=n; i++){
        sum1 += i;
        sum3 += i*i*i;
    }
    sum2 = sum1*sum1;
    printf("%d\n%d\n%d", sum1, sum2, sum3);
}