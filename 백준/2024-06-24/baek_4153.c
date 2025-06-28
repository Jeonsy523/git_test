#include <stdio.h>

int main(){
    int a, b, c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if((a == 0) && (b == 0) && (c == 0)) break;
        int max = a;
        if(b > max) max = b;
        if(c > max) max = c;
        int min = a;
        if(b < min) min = b;
        if(c < min) min = c;
        int mid = a;
        if(a >= b){
            if(b >= c){
                mid = b;
            }else if(c >= a){
                mid = a;
            }else{
                mid = c;
            }
        }else{
            if(a >= c){
                mid = a;
            }else if(c >= b){
                mid = b;
            }else{
                mid = c;
            }
        }
        if(max*max == (mid*mid)+(min*min)){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
}