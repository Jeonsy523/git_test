#include <stdio.h>

int main(){
    int a[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &a[i]);
    }
    if((a[0]<a[1]) && (a[1]<a[2]) && (a[2]<a[3]) && (a[3]<a[4]) && (a[4]<a[5]) && (a[5]<a[6]) && (a[6]<a[7])){
        printf("ascending");
    }else if((a[0]>a[1]) && (a[1]>a[2]) && (a[2]>a[3]) && (a[3]>a[4]) && (a[4]>a[5]) && (a[5]>a[6]) && (a[6]>a[7])){
        printf("descending");
    }else{
        printf("mixed");
    }
}