#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[10001], b[10001], r[10002][10002];
    scanf("%s %s", a, b);
    int a_len = strlen(a), b_len = strlen(b), tmp, c, n, digit;

    for(int i = 0; i <= a_len - (i+1); i++){
        tmp=a[i];
        a[i]=a[a_len-1-i];
        a[a_len-1-i]=tmp;
    }
    for(int i = 0; i <= b_len - (i+1); i++){
        tmp=b[i];
        b[i]=b[b_len-1-i];
        b[b_len-1-i]=tmp;
    }
    if(a_len > b_len){
        for(int i = b_len; i < a_len; i++){
            b[i] = '0';
        }
    }else if(a_len < b_len){
        for(int i = a_len; i < b_len; i++){
            a[i] = '0';
        }
    }

    c=0;
    // for(int i = 0; i < (a_len > b_len ? a_len : b_len); i++){
    //     n = ((c + (a[i] - '0') * (b[0] - '0')) % 10 );
    //     r[i] = n + '0';
    //     if( (c +  (a[i] - '0') * (b[0] - '0') ) > 9 ){
    //         c = ( c +  (a[i] - '0') * (b[0] - '0') ) / 10 ;
    //     }else{
    //         c = 0;
    //     }
    //     if(r[i] == ':'){
    //         r[i] = '0';
    //     }
    //     printf("%d\n", c);
    // }
    
    digit = 0;
    while(digit < b_len){
        for(int i = 0; i < (a_len > b_len ? a_len : b_len); i++){
            n = ((c + (a[i] - '0') * (b[digit] - '0')) % 10 );
            r[digit][i] = n + '0';
            if( (c +  (a[i] - '0') * (b[digit] - '0') ) > 9 ){
                c = ( c +  (a[i] - '0') * (b[digit] - '0') ) / 10 ;
            }else{
                c = 0;
            }
            if(r[digit][i] == ':'){
                r[digit][i] = '0';
            }
            printf("%d\n", c);
        }
        digit++;
    }
    
    // if(c != 0){
    //     n = (a_len > b_len ? a_len : b_len);
    //     r[n] = 'c';
    //     for(int i = (a_len > b_len ? a_len : b_len); i>=0; i--){
    //         printf("%c", r[digit][i]);
    //     }
    // }else if(c == 0){
    //     for(int i = (a_len > b_len ? a_len : b_len) - 1; i>=0; i--){
    //         printf("%c", r[digit][i]);
    //     }
    // }

    printf("%s", r[digit]);

    // 확인 인자
    // printf("\n%s %s\n", a, b);
    // printf("%d %d\n", a_len, b_len);
    // printf("%s\n", r);

    return 0;
}