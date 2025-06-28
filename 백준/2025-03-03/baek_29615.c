#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int queue[n];
    int friend[m];
    int friendNum[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &queue[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &friend[i]);
    }
    int count = 0;
    int flag_count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (queue[j] == friend[i])
            {
                friendNum[i] = j;
                break;
            }
        }
    }
    for(int i = 0; i < m; i++){
        if(friendNum[i] >= m) count++;
    }
    printf("%d", count);
}