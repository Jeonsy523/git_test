#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n, m, diff;
    scanf("%lld %lld", &n, &m);
    diff = llabs(n-m);

    printf("%lld", diff);
}