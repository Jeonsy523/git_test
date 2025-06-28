#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n-1], b[n];

    for(int i=0; i<(n-1); i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        b[i] = 0;
    }
    
    for(int i=0; i<(n-1); i++){
        b[a[i]-1]++;
    }
    
    for(int i=0; i<n; i++){
        if(b[i] != 1) printf("%d", i+1);
    }
}