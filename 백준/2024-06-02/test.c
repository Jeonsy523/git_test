#include <stdio.h>
#include <ctype.h>

int main(){
    char a[1000];
        scanf("%s", a);
        printf("%c", a[0]);
        for(int j=0; j<1000; j++){
            if(iscntrl(a[j+1])){
                printf("%c\n", a[j]);
            }
        }
}