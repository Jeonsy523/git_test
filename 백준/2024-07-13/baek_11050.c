#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    if(k == 0){
        printf("1");
        return 0;
    }
    int tmp1 = n, tmp2 = k;
    for(int i=1; i<k; i++){
        tmp1 *= (n-i);
        tmp2 *= (k-i);
    }
    printf("%d", tmp1 / tmp2);
}