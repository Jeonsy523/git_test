#include <stdio.h>
#include <string.h>

int main(){
    char class[7][23];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",class[i]);
    }
    for(int i=0; i<n; i++){
        if(strcmp(class[i], "Algorithm") == 0){
            printf("%d\n", 204);
        }else if(strcmp(class[i], "DataAnalysis") == 0){
            printf("%d\n", 207);
        }else if(strcmp(class[i], "ArtificialIntelligence") == 0){
            printf("%d\n", 302);
        }else if(strcmp(class[i], "CyberSecurity") == 0){
            printf("B%d\n", 101);
        }else if(strcmp(class[i], "Network") == 0){
            printf("%d\n", 303);
        }else if(strcmp(class[i], "Startup") == 0){
            printf("%d\n", 501);
        }else if(strcmp(class[i], "TestStrategy") == 0){
            printf("%d\n", 105);
        }
    }
}