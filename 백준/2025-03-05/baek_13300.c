#include <stdio.h>

int main(){
    int n, k, count = 0, roomCnt = 0;
    scanf("%d %d", &n, &k);
    int st[n][2];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &st[i][0], &st[i][1]);
    }
    for(int i = 0; i < n; i++){
        if(st[i][1] == 0) continue;
        int gender = st[i][0];
        int grade = st[i][1];
        roomCnt = 1;
        count++;
        for(int j = i + 1; j < n; j++){
            if(st[j][1] == grade && st[j][0] == gender){
                roomCnt++;
                st[j][1] = 0;
                if(roomCnt >= k){
                    roomCnt = 0;
                    count++;
                }
            }
        }
    }
    printf("%d", count);
}