#include <stdio.h>
#include <string.h>

int main(){
    char type[12] = "null";
    int floors = 1;
    scanf("%s %d", type, &floors);
    if(!strcmp("residential", type)){
        if(floors == 1){
            printf("0");
        }
        else if(floors <= 5){
            printf("1");
        }
        else if(floors <= 10){
            printf("2");
        }
        else if(floors <= 15){
            printf("3");
        }
        else if(floors <= 20){
            printf("4");
        }
    }
    else if(!strcmp("commercial", type)){
        if(floors == 1){
            printf("0");
        }
        else if(floors <= 7){
            printf("1");
        }
        else if(floors <= 14){
            printf("2");
        }
        else if(floors <= 20){
            printf("3");
        }
    }
    else if(!strcmp("industrial", type)){
        if(floors == 1){
            printf("0");
        }
        else if(floors <= 4){
            printf("1");
        }
        else if(floors <= 8){
            printf("2");
        }
        else if(floors <= 12){
            printf("3");
        }
        else if(floors <= 16){
            printf("4");
        }
        else if(floors <= 20){
            printf("5");
        }
    }
}