#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    double b[n];
    for(int i = 0; i < n; i++){
        b[i] = ((double)a[i] / (double)max)*100;
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += b[i];
    }
    printf("%lf", sum/n);
}