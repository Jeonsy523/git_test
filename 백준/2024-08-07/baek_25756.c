#include <stdio.h>
#include <math.h>

int main(){
    int n; 
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    double a[n+1];
    a[0] = 0;
    for(int i = 0; i < n; i++){
        a[i+1] = 1-(1-(double)v[i]/100)*(1-a[i]);
        //printf("%lf\t", fmod((a[i+1]*100 - (int)(a[i+1]*100)), 1.0));
        //if(a[i+1] - (int)a[i+1] == 0){
            printf("%.6f\n", a[i+1]*100);
        //}else{
        //    printf("%g\n", a[i+1]*100);
        //}
    }
}