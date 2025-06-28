#include <stdio.h>

int prime_n(int a){
    int c = 0;
    for(int i = 2; i <= (a-1); i++){
        if(a%i == 0){
            c++;
        }
    }
    if(c == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int n;
    int c = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 1){
            continue;
        }else if(prime_n(a[i]) == 0){
            c++;
        }
    }
    printf("%d", c);
}