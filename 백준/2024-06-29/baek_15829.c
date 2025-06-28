#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


char r[76] = "0";
char r2[76];

void switch_num(char *final){
    int tmp[76];
    for(int i = 0; i <= strlen(final) - (i+1); i++){
       tmp[strlen(final)-1-i]=final[i];
       final[i]=final[strlen(final)-1-i];
       final[strlen(final)-1-i]=tmp[strlen(final)-1-i];
    }
}

char* multiply(int a, char num1[76], int num, int length){
    char num31[76];
    sprintf(num31,"%d",num);
    if(strlen(num31) != 1) switch_num(num31);
    if(num/10 == 0){
        num31[1] = '\0';
    }
    //printf(" %d\n ", strlen(num31));
    char x[76];
    char y[76];
    char z[76];
    char tmp[76];
    static char r[76];
    int c, n, count;

    strcpy(x, num1);

    if(a==0){
        strcpy(r, "1");
    }else{
        for(int k = 0; k < a; k++){
            count = 0;
            c = 0;
            strcpy(y, x);
            for(int i1 = 0; i1 < 76; i1++){
                if(iscntrl(x[i1])){
                    break;
                }
                n = (c + (x[i1]-'0')*(num31[0] - '0'))%10;
                c = (c + (x[i1]-'0')*(num31[0] - '0'))/10;
                y[i1] = n +'0';
                count++;
            }
            if((c != 0)||(c != '\0')){
                y[count] = c + '0';
                count++;
            }
            y[count] = 0;
            //printf(" \'y=%s\' ", y);


            strcpy(z, "0");
            if(strlen(num31) != 1){
                c = 0;
                count = 0;
                for(int i2 = 0; i2 < 76; i2++){
                    if(iscntrl(x[i2])){
                        break;
                    }
                    n = (c + (x[i2]-'0')*(num31[1] - '0'))%10;
                    c = (c + (x[i2]-'0')*(num31[1] - '0'))/10;
                    z[i2+1] = n +'0';
                    count++;
                }
            

                if((c != 0)||(c != '\0')){
                    z[count+1] = c + '0';
                    count++;
                }
                z[count+1] = 0;
            }else{
                count = 0;
                for(int j = 0; j < length; j++){
                    z[j] = '0';
                }
                z[strlen(y)-1] = '0';
                z[strlen(y)] = 0;
            }
            //printf(" \'z=%s\' ", z);
            //printf(" %d  ", c);
            //printf(" %d  ", count);


            for(int i3 = strlen(y); i3 < strlen(z); i3++){
                y[i3] = '0';
                y[i3+1] = 0;
            }


            c = 0;
            for(int i4 = 0; i4 < strlen(y); i4++){
                r[i4] = ((c + (y[i4]-'0') + (z[i4]-'0')) % 10) + '0';
                c = ((c + (y[i4]-'0') + (z[i4]-'0')) / 10);
                //printf(" %d  ", c);
            }

            if((c != 0)||(c != '\0')){
                r[strlen(y)-1] = c + '0';
            }
            r[strlen(y)] = 0;
            
            strcpy(x, r);
        }
    }

    return r;
}

char* add(char a[76], char b[76]){
    int a_len = strlen(a), b_len = strlen(b), tmp, c, n;

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
    for(int i = 0; i < (a_len > b_len ? a_len : b_len); i++){
        n = (c + ((a[i] - '0') + (b[i] - '0')) % 10 );
        r2[i] = n + '0';
        if( (c +  (a[i] - '0') + (b[i] - '0') ) > 9 ){
            c = 1;
        }else{
            c = 0;
        }
        if(r2[i] == ':'){
            r2[i] = '0';
        }
    }
    
    if(c == 1){
        n = (a_len > b_len ? a_len : b_len);
        r2[n] = '1';
        for(int i = (a_len > b_len ? a_len : b_len); i>=0; i--){
        }
    }else if(c == 0){
        for(int i = (a_len > b_len ? a_len : b_len) - 1; i>=0; i--){
        }
    }

    return r2;
}

int main(){
    char l[50], tmp[76];
    char v[50][76];
    char r_save[50][76];
    char final[76];
    int m[50];
    int n;
    scanf("%d", &n);
    scanf("%s", &l);


    for(int i = 0; i < n; i++){
        strcpy(r_save[i], multiply(i, "1", 31, 3));
        //printf("\n%0s ", r_save[i]);
    }

    for(int i = 0; i < n; i++){
        strcpy(v[i], multiply(1, r_save[i], l[i] - 'a' + 1, strlen(r_save[i])));
        //printf("%s    ", v[i]);
    }

    for(int i = 0; i < n; i++){
        strcpy(final, add(final, v[i]));
    }

    //printf("%s", final);
    
    if(strlen(final) != 1){
        for(int i = 0; i <= strlen(final) - (i+1); i++){
            tmp[strlen(final)-1-i]=final[i];
            final[i]=final[strlen(final)-1-i];
            final[strlen(final)-1-i]=tmp[strlen(final)-1-i];
        }
    }

    printf("%s", final);
}