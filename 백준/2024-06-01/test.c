#include <stdio.h>

int main(){
    int i = 0;
    int a = 1;
    int b = 1;
    while(1){
        scanf("%d %d", &a, &b);
        if(a + b == 0){
            break;
        }
        printf("%d\n", a + b);
        i++;
    }
}