#include <stdio.h>

int main(){
    int t, k, n;
    int a[15][14];
    
    for(int i = 0; i < 15; i++){
        a[i][0] = 1;
    }
    for(int i = 0; i < 14; i++){
        a[0][i] = i+1;
    }
    for(int i = 1; i < 15; i++){
        for(int j = 1; j < 14; j++){
            a[i][j] = a[i][j-1] + a[i-1][j];
        }
    }
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", a[k][n-1]);
    }
    /*for(int i = 0; i < 15; i++){
        for(int j = 0; j < 14; j++){
            printf("%10d", a[i][j]);
        }
        printf("\n");
    }*/
}