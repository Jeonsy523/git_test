#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int count = 1;
        int num = 1;
        while(num % n != 0){
            num = (num * 10) % n + 1 % n;
            count++;
        }
        printf("%d\n", count);
    }
}