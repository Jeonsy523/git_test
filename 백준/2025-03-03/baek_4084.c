#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1, b = 1, c = 1, d = 1;
    while(a != 0 && b != 0 && c != 0 && d != 0){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        int count = 0;
        for(count = 0; a != b || a != c || a != d || b != c || b != d || c != d; count++){
            int a1 = abs(a - b);
            int b1 = abs(b - c);
            int c1 = abs(c - d);
            int d1 = abs(d - a);
            a = a1; b = b1; c = c1; d = d1;
        }
        printf("%d\n", count);
    }
}