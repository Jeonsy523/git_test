#include <stdio.h>

int main(){
    int a, b;
    double c;
    scanf("%d %d", &a, &b);

    c = (double)a/(double)b;
    printf("%.9lf", c);

    return 0;
}