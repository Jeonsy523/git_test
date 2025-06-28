#include <stdio.h>

int main(){
    int r[42] = {0};
    int num[10], count = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    for(int k = 0; k < 10; k++){
        r[num[k]%42]++;
    }
    for(int j = 0; j < 42; j++){
        if(r[j] != 0){
            count++;
        }
    }
    printf("%d", count);
}