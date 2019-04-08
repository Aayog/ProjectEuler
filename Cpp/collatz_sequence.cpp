#include <iostream>

using namespace std;

long lengthChain(int num){
    long count = 1;
    while(num > 1){
        if (num % 2 == 0){
            num /= 2;
        }else{
            num = 3 * num + 1;
        }
        count++;
    }
    // cout << endl;
    return count;
}

int main(void){
    long x = 0;
    const long MAX = 10000000;
    long high = 0;
    long ans = 0;
    while (x <= MAX){
        long len = lengthChain(x);
        if(len > high){
            high = len;
            ans = x;
        }
        x++;
    }
    cout << "high : " << high << " ans: " << ans << endl;
}