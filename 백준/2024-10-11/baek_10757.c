#include <stdio.h>

// 큰 수 더하기를 할 때 이런 방법을 사용해서는 안됨

int main(){
    long double n1=9223372036854775807.0 , n2=9223372036854775808.0;
    //scanf("%Lf %Lf", &n1, &n2);
    double n3 = n1 + n2;
    printf("%.0Lf", n3);
}