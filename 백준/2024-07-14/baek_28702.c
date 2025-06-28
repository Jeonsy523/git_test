#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char a[9], b[9], c[9];
    int a1, b1, c1;
    int r1 = 3, r2 = 3, r3 = 3;
    int tmp;
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if(isalpha(a[0]) == 0){
        a1 = atoi(a);
    }else if(strcmp(a, "FizzBuzz") == 0){
        r1 = 0;
    }else if(strcmp(a, "Fizz") == 0){
        r1 = 1;
    }else{
        r1 = 2;
    }

    if(isalpha(b[0]) == 0){
        b1 = atoi(b);
    }else if(strcmp(b, "FizzBuzz") == 0){
        r2 = 0;
    }else if(strcmp(b, "Fizz") == 0){
        r2 = 1;
    }else{
        r2 = 2;
    }

    if(isalpha(c[0]) == 0){
        c1 = atoi(c);
    }else if(strcmp(c, "FizzBuzz") == 0){
        r3 = 0;
    }else if(strcmp(c, "Fizz") == 0){
        r3 = 1;
    }else{
        r3 = 2;
    }

    if(r3 == 3){
        tmp = c1 + 1;
    }else if(r2 == 3){
        tmp = b1 + 2;
    }else if(r1 == 3){
        tmp = a1 + 3;
    }

    if(tmp % 15 == 0){
        printf("FizzBuzz\n");
    }else if(tmp % 5 == 0){
        printf("Buzz\n");
    }else if(tmp % 3 == 0){
        printf("Fizz\n");
    }else{
        printf("%d", tmp);
    }
}