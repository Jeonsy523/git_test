#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", 1 + (a - 2) * ((b * (b + 1)) / 2) + b);
}