#include <stdio.h>
#include <string.h>

int main()
{
    char a[10001], b[10001];
    scanf("%s %s", a, b);
    
    long long int sum_a = 0;
    int len_a = strlen(a);

    for(int i = 0; i < len_a; i++)
    {
        sum_a += a[i] - '0';
    }

    int len_b = strlen(b);
    long long int sum_b = 0;

    for(int i = 0; i < len_b; i++)
    {
        sum_b += b[i] - '0';
    }

    printf("%lld", sum_a*sum_b);
}