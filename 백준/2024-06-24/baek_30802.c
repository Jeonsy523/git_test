#include <stdio.h>

int main(){
    int n, t, p;
    int count = 0;
    int s[6];
    scanf("%d", &n);
    for(int i = 0; i < 6; i++){
        scanf("%d", &s[i]);
    }
    scanf("%d %d", &t, &p);
    for(int k = 0; k < 6; k++){
        if(s[k]%t == 0){
            count += (s[k]/t);
        }else{
            count += ((s[k]/t)+1);
        }
    }
    printf("%d\n", count);
    printf("%d %d", n/p, n%p);
}