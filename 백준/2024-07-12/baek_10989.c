#include <stdio.h>

int main(){
    int n, a[10000], tmp, size;
    scanf("%d", &n);
    size = n;

    for(int i=0; i<10000; i++){
        a[i] = 0;
    }

    for(int i=0; i<size; i++){
        scanf("%d", &tmp);
        a[tmp-1]++;
    }

    for(int i=0; i<10000; i++){
        if(a[i] == 0) continue;
        for(int j=0; j<a[i]; j++){
            printf("%d\n", i+1);
        }
    }
    return 0;
}