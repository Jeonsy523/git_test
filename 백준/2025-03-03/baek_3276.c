#include <stdio.h>

int main()
{
    int n, a = 1, b = 1;
    scanf("%d", &n);
    while (a * b < n){
        if (b < a)
        {
            b++;
            continue;
        }
        a++;
    }
    printf("%d %d", a, b);
}