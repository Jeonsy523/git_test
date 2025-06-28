#include <stdio.h>
#include <time.h>

int main(){
    time_t a;
    struct tm *p;
    a = time(NULL);
    p = localtime(&a);
    p->tm_hour -= 9;
    if(p->tm_hour < 0){
        p->tm_mday -= 1;
    }
    printf("%d\n", p->tm_year+1900);
    printf("%02d\n", p->tm_mon+1);
    printf("%d\n", p->tm_mday);
}