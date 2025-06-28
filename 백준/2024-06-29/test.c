#include<stdio.h>

int main() {
    
    int n=0, m=1234567891;
    long long hash=0, r=1;
    scanf("%d", &n);
    char array[n+1];
    scanf("%s", array);
    
    for(int i=0 ; i < n ; i++) {
        
        hash += (array[i] - 'a' + 1) * r;
        hash %= m;
        r *= 31;
        r %= m;
    }
    
    printf("%lld", hash);
    
    return 0;
}