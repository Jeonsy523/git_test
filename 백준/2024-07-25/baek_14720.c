#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int shop[n];
    for(int i = 0; i < n; i++) scanf("%d", &shop[i]);
    int count = 0, tmp = -1;
    for(int i = 0; i < n; i++){
        if(shop[i] == 0){
            tmp = i;
            break;
        }
    }
    //printf("%d\n", tmp);
    if(tmp == -1){
        printf("0");
        return 0;
    }
    int tmp2 = 0;
    for(int i = tmp; i < n; i++){
        if(shop[i] == tmp2){
            count++;
            tmp2 = (tmp2+1)%3;
            //printf("%d, %d\n", shop[i+1], count);
        }
    }
    printf("%d\n", count);
}