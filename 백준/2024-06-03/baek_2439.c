#include <stdio.h>

int main(){
    int n;
    int k=1;
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        for(int j=k; j<=n-1; j++){
            printf(" ");
        }
        k++;
        for(int j=n+1; j>i; j--){
            printf("*");
        }
        printf("\n");
    }
}