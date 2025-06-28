#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int a[n], b[n], result[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        if(a[i] - b[i] >= 0){
            count++;
            continue;
        }
        result[j++] = abs(a[i] - b[i]);
    }
    if(count >= k)
    {
        printf("0");
        return 0;
    }
    qsort(result, j, sizeof(result[0]), compare);
    printf("%d", result[k - count - 1]);
}

int compare(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
        return 1;

    else if (*(int *)a < *(int *)b)
        return -1;

    else
        return 0;
}