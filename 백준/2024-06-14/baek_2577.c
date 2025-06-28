#include <stdio.h>

int main(){
    int a, b, c, n;
    int count[10] = {0};
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    n = a * b * c;
    while(n>0){
        int i = 10;
        int j;
        j = n % i;
        count[j]++;
        n = n/i;
    }
    for(int k = 0; k < 10; k++){
        printf("%d\n", count[k]);
    }
}