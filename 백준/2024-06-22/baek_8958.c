#include <stdio.h>

int main(){
    int n, count, sum;
    scanf("%d", &n);
    char q[81];
    for(int k = 0; k < n; k++){
        scanf("%s", &q);
        sum = 0;
        count = 0;
        for(int i = 0; i < 81; i++){
            if(q[i] == 'O'){
                count++;
                sum += count;
            }else{
                count = 0;
            }
            if(q[i] == '\0') break;
        }
        printf("%d\n", sum);
    }
}