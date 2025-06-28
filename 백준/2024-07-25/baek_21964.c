#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char buf[100001];
    scanf("%s", buf);
    for(int i = n-5; i < n; i++){
        printf("%c",buf[i]);
    }
}