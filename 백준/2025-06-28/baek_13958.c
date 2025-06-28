#include <stdio.h>
#include <string.h>

int main()
{
    char equation[10];
    fgets(equation, 10, stdin);
    char equ_element[6];
    int left, right;
    left = equation[0] - '0';
    right = equation[8] - '0';
    switch (equation[2])
    {
    case '+':
        left += (equation[4] - '0');
        break;
    case '-':
        left -= (equation[4] - '0');
        break;
    case '/':
        left /= (equation[4] - '0');
        break;
    case '*':
        left *= (equation[4] - '0');
        break;
    default:
        break;
    }

    if(left == right) printf("YES\n");
    else printf("NO\n");
}