#include <stdio.h>
#include <string.h>

int main(){
    char x[3];
    scanf("%s", &x);
    if(strcmp(x,"A+")==0){
        printf("%.1lf", 4.3);
    }
    if(strcmp(x,"A0")==0){
        printf("%.1lf", 4.0);
    }
    if(strcmp(x,"A-")==0){
        printf("%.1lf", 3.7);
    }
    if(strcmp(x,"B+")==0){
        printf("%.1lf", 3.3);
    }
    if(strcmp(x,"B0")==0){
        printf("%.1lf", 3.0);
    }
    if(strcmp(x,"B-")==0){
        printf("%.1lf", 2.7);
    }
    if(strcmp(x,"C+")==0){
        printf("%.1lf", 2.3);
    }
    if(strcmp(x,"C0")==0){
        printf("%.1lf", 2.0);
    }
    if(strcmp(x,"C-")==0){
        printf("%.1lf", 1.7);
    }
    if(strcmp(x,"D+")==0){
        printf("%.1lf", 1.3);
    }
    if(strcmp(x,"D0")==0){
        printf("%.1lf", 1.0);
    }
    if(strcmp(x,"D-")==0){
        printf("%.1lf", 0.7);
    }
    if(strcmp(x,"F")==0){
        printf("%.1lf", 0.0);
    }
}