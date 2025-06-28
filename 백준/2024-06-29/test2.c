#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char num31[76] = "1";
    char x[76] = "1";
    char y[76];
    char z[76];
    char tmp[76];
    static char r[76];
    int c, n, count, length = 1, a=4;

    if(a==0){
        strcpy(r, "1");
    }else{
        for(int k = 0; k < a; k++){
            count = 0;
            c = 0;
            strcpy(y, x);
            for(int i = 0; i < 76; i++){
                if(iscntrl(x[i])){
                    break;
                }
                n = (c + (x[i]-'0')*(num31[0] - '0'))%10;
                c = (c + (x[i]-'0')*(num31[0] - '0'))/10;
                y[i] = n +'0';
                count++;
            }
            z[count+1] = 0;

            if(iscntrl(num31[1]) == 0){
                strcpy(z, "0");
                for(int i = 0; i < 76; i++){
                    if(iscntrl(y[i])){
                        break;
                    }
                    n = (c + (y[i]-'0')*(num31[1] - '0'))%10;
                    c = (c + (y[i]-'0')*(num31[1] - '0'))/10;
                    z[i+1] = n +'0';
                }
            }else{
                for(int j = 0; j < length; j++){
                    z[j] = '0';
                }
            }

            if((c != 0)||(c != '\0')){
                z[count+1] = c + '0';
                count++;
            }
            z[count+1] = 0;


            for(int i = strlen(y); i < strlen(z); i++){
                y[i] = '0';
                y[i+1] = 0;
            }


            c = 0;
            for(int i = 0; i < strlen(z); i++){
                r[i] = ((c + (y[i]-'0') + (z[i]-'0')) % 10) + '0';
                c = ((c + (y[i]-'0') + (z[i]-'0')) / 10);
            }

            if((c != 0)||(c != '\0')){
                r[count+1] = c + '0';
                count++;
            }
            r[count+1] = 0;
            
            strcpy(x, r);
        }
        for(int i = 0; i <= strlen(r) - (i+1); i++){
            tmp[strlen(r)-1-i]=r[i];
            r[i]=r[strlen(r)-1-i];
            r[strlen(r)-1-i]=tmp[strlen(r)-1-i];
        }
    }

    printf("%s", r);
}