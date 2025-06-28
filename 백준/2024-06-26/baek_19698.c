#include <stdio.h>

int main(){
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);
    if(n>(w/l)*(h/l)) printf("%d", (w/l)*(h/l));
    else printf("%d", n);
}