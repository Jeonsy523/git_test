#include <stdio.h>
#include <string.h>

int main()
{
    int n = 1;

    while (1)
    {
        char str[201];
        scanf("%d", &n);
        if (n == 0)
            break;
        
        scanf("%s", str);
        int len = strlen(str);
        // printf("%d\n\n", len);
        char arr[len / n][n];
        int str_idx = 0, arr_col = 0, arr_row = 0;
        int status = 1;

        for (int i = 0; i < len; i++)
        {
            arr[arr_row][arr_col] = str[i];
            // printf("%c ", str[i]);
            if (status == 1)
            {
                arr_col++;
                if (arr_col == n)
                {
                    status = 0;
                    arr_col--;
                    arr_row++;
                }
            }
            else
            {
                arr_col--;
                if (arr_col == -1)
                {
                    status = 1;
                    arr_col++;
                    arr_row++;
                }
            }
        }
        // printf("\n\n");

        // for (int i = 0; i < len / n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         printf("%c ", arr[i][j]);
        //     }
        //     printf("\n");
        // }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < len / n; j++)
            {
                printf("%c", arr[j][i]);
            }
        }
        printf("\n");
    }
}