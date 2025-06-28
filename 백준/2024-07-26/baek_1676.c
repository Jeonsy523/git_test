// #include <stdio.h>

// int main(){
//     int n, tmpcount2 = 0, tmpcount5 = 0;
//     scanf("%d", &n);
//     int count = 0;
//     for(int i = 1; i <= n; i++){
//         switch (i) {
//             case 25:
//             case 75:
//             case 175:
//             case 225:
//             case 275:
//             case 325:
//             case 375:
//             case 425:
//             case 475:
//                 tmpcount5 += 2;
//                 break;

//             case 50:
//             case 150:
//             case 350:
//             case 450:
//                 tmpcount5++;
//                 count++;
//                 break;

//             case 100:
//             case 200:
//             case 300:
//             case 400:
//                 count += 2;
//                 break;

//             case 500:
//                 count += 2;
//                 tmpcount5++;
//                 break;

//             case 125:
//                 tmpcount5 += 3;
//                 break;

//             case 250:
//                 count++;
//                 tmpcount5 += 2;
//                 break;
//         }
//         printf("%d, %d, %d\n", i, tmpcount5, count);
//     }
//     printf("%d\n", count + tmpcount5);
// }
#include <stdio.h>

int main(){
    int n, tmpcount2 = 0, tmpcount5 = 0;
    scanf("%d", &n);
    int count = 0;

    for(int i = 1; i <= n; i++){
        int num = i;
        while (num % 2 == 0) {
            tmpcount2++;
            num /= 2;
        }
        while (num % 5 == 0) {
            tmpcount5++;
            num /= 5;
        }
        //printf("%d, %d, %d\n", i, tmpcount2, tmpcount5);
    }
    printf("%d\n", tmpcount5);
}
