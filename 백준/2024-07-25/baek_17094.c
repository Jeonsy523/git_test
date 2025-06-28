#include <stdio.h>

int main(){
    int n;
    char s[100001];
    scanf("%d", &n);
    scanf("%s", s);
    int count_2 = 0, count_e = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '2') count_2++;
        else if(s[i] == 'e') count_e++;
    }
    if(count_2 == count_e) printf("yee");
    else if(count_2 > count_e) printf("2");
    else printf("e");
}