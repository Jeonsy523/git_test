#include <stdio.h>

int main(){
    int  h, w, n, man;
    scanf("%d", &man);
    for(int k = 0; k < man; k++){
        scanf("%d %d %d", &h, &w, &n);
        int wn = 1;
        int hn = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(hn == h){
                hn = 0;
                wn ++;
            }
            hn++;
            count++;
            if(count == n){
                printf("%d\n", (hn*100) + wn);
            }
        }
    }
}