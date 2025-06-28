#include <stdio.h>

int main(){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int count;
    if(a == v){
        count = 1;
    }else if(a-b == 1){
        count = v - b;
    }else{
        if(((v-a) % (a-b)) == 0) count = 2 + (v-a) / (a-b) - 1;
        else count = 2 + (v-a) / (a-b);
    }
    printf("%d", count);
}