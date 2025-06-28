#include <stdio.h>

int main(){
    int s, w;
    scanf("%d",&s);
    scanf("%d",&w);
    if(s >= 20){
        s = 24 - s;
    }else if (s <= 3){
        s = 0 - s;
    }
    printf("%d",s + w);
}