#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a<=50&&b<=10){
        printf("White");
    }else if(b<=30){
        printf("Yellow");
    }else if(b>30){
        printf("Red");
    }
}