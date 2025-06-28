#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][2];
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a[i][0], &a[i][1]);
        b[i] = a[i][0] + a[i][1];
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", b[i]);
    }

}