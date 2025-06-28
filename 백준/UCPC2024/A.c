#include <stdio.h>

int main() {
    int h, w;
    scanf("%d", &h);
    scanf("%d", &w);
    double rTmp;
    if(h < w) rTmp = h;
    else rTmp = w;
    printf("%d", (int)((rTmp*100)/2));
}