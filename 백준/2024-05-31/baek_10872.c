#include <stdio.h>

int main(){
    int n, f;
    scanf("%d", &n);

    f=n;

    if(n == 0){
        f=1;
    }else{
        for(int i = n; i>1; i--){
            f*=i-1;
        }
    }

    printf("%d", f);
}