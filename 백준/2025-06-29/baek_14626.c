#include <stdio.h>

int main()
{
    char isbn[14];
    scanf("%s", isbn);

    int check = 0;
    int m = 0;
    for(int i = 0; i < 13; i++)
    {
        int c = isbn[i] - '0';
        if(isbn[i] == '*')
        {
            if(i % 2 == 0) m = 1;
            else m = 3;
            continue;
        }
        if(i % 2 == 1) c *= 3;
        check += c;
    }

    // printf("%d %d\n", m, check);

    // printf("%d\n", ((10 - (check % 10)) % 10) / m );
    for(int i = 0; i < 10; i++)
    {
        if((check + i*m) % 10 == 0)
        {
            printf("%d\n", i);
        }
    }
}