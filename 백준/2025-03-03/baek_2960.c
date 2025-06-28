#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = i;
    }
    arr[0] = 1;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i * j <= n)
            {
                if (arr[i * j] == 1)
                    continue;
                arr[i * j] = 1;
                count++;
                if (count == k)
                {
                    printf("%d", i * j);
                    return 0;
                }
            }
        }
    }
    printf("%d", n);
}