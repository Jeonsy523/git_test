#include <stdio.h>

int swap(long long int *a, long long int *b)
{
    long long int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[15];
    long long int numerator = 1, denominator;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    denominator = arr[n - 1];
    // printf("%lld %lld\n", numerator, denominator);
    for (int i = n - 2; i >= 0; i--)
    {
        numerator = numerator + denominator * arr[i];
        // printf("%lld %lld\n", numerator, denominator);
        swap(&numerator, &denominator);
    }
    // printf("%d %d\n", numerator, denominator);
    
    printf("%lld %lld\n", denominator - numerator, denominator);
}