#include <stdio.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while (a != b)
    {
        c = (max(a, b)) - (min(a, b));
        a = min(a, b);
        b = c;
        // printf("%d %d %d\n", a, b, c);
    }
    printf("%d\n", a);
}