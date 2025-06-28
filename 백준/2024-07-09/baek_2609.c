#include <stdio.h>

int main() {
    int n1, n2, big, small, gcd, lcm;
    scanf("%d %d", &n1, &n2);
    if(n1 > n2) {
        big = n1;
        small = n2;
    } else {
        big = n2;
        small = n1;
    }
    for(int i = small; i > 0; i--) {
        if((small % i == 0) && (big % i == 0)) {
            gcd = i;
            break;
        }
    }
    for(int i = big; ; i++) {
        if((i % big == 0) && (i % small == 0)) {
            lcm = i;
            break;
        }
    }
    printf("%d\n%d", gcd, lcm);
}