#include <stdio.h>
#include <ctype.h>

int main(){
    char x[100];
    scanf("%s", &x);
    for(int i = 0; i<100; i++){
        if(isupper(x[i])){
            x[i] = tolower(x[i]);
        }else{
            x[i] = toupper(x[i]);
        }
    }
    printf("%s", x);
}