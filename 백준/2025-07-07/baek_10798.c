#include <stdio.h>

int main()
{
    char input[5][16];
    int status[5] = {1,1,1,1,1};

    for(int i = 0; i < 5; i++)
    {
        scanf("%s", input[i]);
    }

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(status[j] != 0 && input[j][i] != '\0')
            {
                printf("%c", input[j][i]);
            }

            if(input[j][i] == '\0')
            {
                status[j] = 0;
            }
        }
    }
}