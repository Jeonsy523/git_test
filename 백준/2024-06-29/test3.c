#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void switch_num(char *final) {
    int len = strlen(final);
    for (int i = 0; i < len / 2; i++) {
        char temp = final[i];
        final[i] = final[len - 1 - i];
        final[len - 1 - i] = temp;
    }
}

char* multiply(int a, char num1[76], int num, int length) {
    char num31[76];
    sprintf(num31, "%d", num);
    if (strlen(num31) != 1) switch_num(num31);
    if (num / 10 == 0) {
        num31[1] = '\0';
    }
    char x[76], y[76], z[76], tmp[76];
    static char r[76];
    int c, n, count;

    strcpy(x, num1);

    if (a == 0) {
        strcpy(r, "1");
    } else {
        for (int k = 0; k < a; k++) {
            count = 0;
            c = 0;
            strcpy(y, x);
            for (int i = 0; i < 76; i++) {
                if (iscntrl(x[i])) {
                    break;
                }
                n = (c + (x[i] - '0') * (num31[0] - '0')) % 10;
                c = (c + (x[i] - '0') * (num31[0] - '0')) / 10;
                y[i] = n + '0';
                count++;
            }
            if (c != 0) {
                y[count] = c + '0';
                count++;
            }
            y[count] = 0;

            strcpy(z, "0");
            if (strlen(num31) != 1) {
                c = 0;
                count = 0;
                for (int i = 0; i < 76; i++) {
                    if (iscntrl(x[i])) {
                        break;
                    }
                    n = (c + (x[i] - '0') * (num31[1] - '0')) % 10;
                    c = (c + (x[i] - '0') * (num31[1] - '0')) / 10;
                    z[i + 1] = n + '0';
                    count++;
                }
                if (c != 0) {
                    z[count + 1] = c + '0';
                    count++;
                }
                z[count + 1] = 0;
            } else {
                count = 0;
                for (int j = 0; j < length; j++) {
                    z[j] = '0';
                }
                if (c != 0) {
                    z[count] = '0';
                } else {
                    count++;
                    z[count] = '0';
                }
                z[count + 1] = '\0';
            }

            for (int i = strlen(y); i < strlen(z); i++) {
                y[i] = '0';
                y[i + 1] = 0;
            }

            c = 0;
            for (int i = 0; i < strlen(z); i++) {
                r[i] = ((c + (y[i] - '0') + (z[i] - '0')) % 10) + '0';
                c = ((c + (y[i] - '0') + (z[i] - '0')) / 10);
            }

            if (c != 0) {
                r[count + 1] = c + '0';
                count++;
            }
            r[count + 1] = 0;

            strcpy(x, r);
        }
    }

    return r;
}

char* add(char a[76], char b[76]) {
    static char r2[76];
    memset(r2, 0, sizeof(r2)); // 초기화
    int a_len = strlen(a), b_len = strlen(b), tmp, c, n;

    if (a_len > b_len) {
        for (int i = b_len; i < a_len; i++) {
            b[i] = '0';
        }
    } else if (a_len < b_len) {
        for (int i = a_len; i < b_len; i++) {
            a[i] = '0';
        }
    }
    c = 0;
    for (int i = 0; i < (a_len > b_len ? a_len : b_len); i++) {
        n = (c + ((a[i] - '0') + (b[i] - '0')) % 10);
        r2[i] = n + '0';
        if ((c + (a[i] - '0') + (b[i] - '0')) > 9) {
            c = 1;
        } else {
            c = 0;
        }
        if (r2[i] == ':') {
            r2[i] = '0';
        }
    }

    if (c == 1) {
        n = (a_len > b_len ? a_len : b_len);
        r2[n] = '1';
    }

    return r2;
}

int main() {
    char l[50], tmp[76];
    char v[50][76];
    char r_save[50][76];
    char final[76] = "0"; // 초기화
    int m[50];
    int n;
    scanf("%d", &n);
    scanf("%s", l);

    for (int i = 0; i < n; i++) {
        m[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        strcpy(r_save[i], multiply(i, "1", 31, 3));
    }

    for (int i = 0; i < n; i++) {
        strcpy(v[i], multiply(1, r_save[i], l[i] - 'a' + 1, strlen(r_save[i])));
    }

    for (int i = 0; i < n; i++) {
        strcpy(final, add(final, v[i]));
    }

    switch_num(final);

    printf("\n%d\n", atoi(final));

    return 0;
}