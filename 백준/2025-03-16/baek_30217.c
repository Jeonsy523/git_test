#include <stdio.h>
#include <string.h>

int main()
{
    char first[21], second[21];
    scanf("%s %s", first, second);
    int first_len = strlen(first), second_len = strlen(second);
    int first_end = 1, second_start = second_len - 2, f_vowel = 0, s_vowel = 0;

    for (int i = 1; i < first_len; i++)
    {
        first_end = i;
        if (first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u')
        {
            f_vowel = 1;
            break;
        }
    }

    for (int i = second_len - 2; i >= 0; i--)
    {
        second_start = i;
        if (second[i] == 'a' || second[i] == 'e' || second[i] == 'i' || second[i] == 'o' || second[i] == 'u')
        {
            s_vowel = 1;
            break;
        }
    }

    char v1[21], v2[21];

    for (int i = 0; i <= first_end; i++)
    {
        v1[i] = first[i];
    }
    v1[first_end + 1] = '\0';

    for (int i = second_start; i < second_len; i++)
    {
        v2[i - second_start] = second[i];
    }
    v2[second_len - second_start] = '\0';

    char result[41];

    if (s_vowel == 1)
    {
        if (f_vowel == 0)
        {
            strcpy(result, v1);
            strcat(result, v2);
        }
        else
        {
            strcpy(result, v1);
            result[strlen(result) - 1] = '\0';
            strcat(result, v2);
        }
    }
    else
    {
        if (f_vowel == 0)
        {
            strcpy(result, v1);
            strcat(result, "o");
            strcat(result, v2);
        }
        else
        {
            strcpy(result, v1);
            strcat(result, v2);
        }
    }
    printf("%s\n", result);
}