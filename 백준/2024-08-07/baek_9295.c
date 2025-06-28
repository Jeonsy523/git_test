#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][2];
    for(int i = 0; i< n; i++){
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    for(int i = 0; i<n; i++){
        printf("Case %d: %d\n", i+1, a[i][0] + a[i][1]);
    }
}