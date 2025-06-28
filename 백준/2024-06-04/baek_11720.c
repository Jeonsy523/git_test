#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    char a[n+1];
    scanf("%s", a);
    a[n+1] = '\0';
    char *b = a;
    for(int i = 0; i<n; i++){
        sum += *b - '0';
        b++;
    }
    printf("%d", sum);
}