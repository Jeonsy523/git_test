#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int i=0;
    string a;
    getline(cin, a);
    while(isprint(a[i])){
        if(isblank(a[i])){
            if(iscntrl(a[i+1])){
                if(i == 0){
                    count--;
                }
                break;
            }
            if(i == 0){
                i++;
                continue;
            }
            count++;
        }
        i++;
    }
    cout << count + 1 << endl;
}