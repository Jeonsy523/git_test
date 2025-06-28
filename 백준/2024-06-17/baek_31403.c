#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[8], b[8], c[8], s[8];
    int x, y, z, n, s2;
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);
    x = atoi(a);
    y = atoi(b);
    z = atoi(c);
    n = x+y-z;
    strcat(a,b);
    s2 = atoi(a)-z;

    printf("%d\n", n);
    printf("%d", s2);
}