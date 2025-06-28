#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    int a[n];
    for(int i = 0; i < n ; i++){
        scanf("%d %d", &x[i], &y[i]);
        a[i] = n + 1;
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(x[i] > x[j] && y[i] > y[j]){
                a[i]--;
            }else if(x[i] > x[j] && y[i] < y[j]){
                a[i]--;
                a[j]--;
            }else if(x[i] == x[j] || y[i] == y[j]){
                a[i]--;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}