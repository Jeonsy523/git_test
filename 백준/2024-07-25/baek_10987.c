#include <stdio.h>
#include <string.h>

int main(){
    char buf[101];
    scanf("%s", buf);
    int len = strlen(buf);
    int count = 0;
    for(int i = 0; i < len; i++){
        if(buf[i] == 'a' || buf[i] == 'e' || buf[i] == 'i' || buf[i] == 'o' || buf[i] == 'u'){
            count++;
        }
    }
    printf("%d", count);
}