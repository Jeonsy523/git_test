#include <stdio.h>

unsigned long long int factorial(unsigned long long int n);

int main(){
    unsigned long long int a;
    scanf("%llu", &a);
    printf("%llu", factorial(a));
}

unsigned long long int factorial(unsigned long long int n){
    if(n == 0 || n == 1) return 1;
    return factorial(n-1) * n;
}