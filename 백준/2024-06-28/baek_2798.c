#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                sum = a[i] + a[j] + a[k];
                if(sum > m) continue;
                else if(sum > max) max = sum;
            }
        }
    }
    printf("%d", max);
}