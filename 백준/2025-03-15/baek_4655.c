#include <stdio.h>

int main()
{
    double c = 1.0;
    while(1)
    {
        scanf("%lf", &c);
        if(c == 0.0) break;
        int card_cnt = 0;
        double tmp = 0.0;
        while(tmp < c)
        {
            card_cnt++;
            tmp += (1 / (double)(card_cnt + 1));
        }
        printf("%d card(s)\n", card_cnt);
    }
}