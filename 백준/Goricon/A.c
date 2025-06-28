#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 0, m;
    scanf("%d %d", &n, &m);

    int arr[61];
    int result [20001];

    int min = 3;
    int min_index = 0;
    int current = 1;
    int count = 0;
    int zero_count = 0;

    for (int i = 0; i < m; i++)
    {
        min = 3;
        min_index = 0;
        current = 1;
        count = 0;
        zero_count = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (arr[j] == 0)
            {
                zero_count++;
            }
            if (arr[j] < 0)
            {
                count++;
                if (abs(arr[j]) < abs(min))
                {
                    min_index = j;
                    min = arr[j];
                }
            }
        }

        if(n == 1)
        {
            result[i] = arr[0];
            continue;
        }
        else if (zero_count == n)
        {
            current = 0;
        }
        else if(count == 1 && zero_count == n-1)
        {
            current = 0;
        }
        else if (count % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    current *= arr[j];
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] != 0 && j != min_index)
                {
                    current *= arr[j];
                }
            }
        }

        result[i] = current;
    }

    for(int i = 0; i < m; i++)
    {
        printf("%d\n", result[i]);
    }
}