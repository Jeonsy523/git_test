#include <stdio.h>

int main(){
    int n = 100;
    int a = 1;
    int b = 1;
    int i = 0;
    int c[n];
    while(1){
        n++;
        scanf("%d %d", &a, &b);
        if(a + b == 0){
            break;
        }
        c[i] = a + b;
        i++;
    }

    for(int j = 0; j < i; j++){
        printf("%d\n", c[j]);
    }
}