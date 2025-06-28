#include <stdio.h>

int main(){
    int a, b, c, d;
    int p, m, n;
    int pa = 0, ma = 0, na = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d", &p, &m, &n);

    if( (p % (a+b) <= a)&&(p % (a+b) != 0) ){
        pa++;
    }
    if( (p % (c+d) <= c)&&(p % (c+d) != 0) ){
        pa++;
    }
    if( (m % (a+b) <= a)&&(m % (a+b) != 0) ){
        ma++;
    }
    if( (m % (c+d) <= c)&&(m % (c+d) != 0) ){
        ma++;
    }
    if( (n % (a+b) <= a)&&(n % (a+b) != 0) ){
        na++;
    }
    if( (n % (c+d) <= c)&&(n % (c+d) != 0) ){
        na++;
    }

    printf("%d\n%d\n%d\n", pa, ma, na);
}