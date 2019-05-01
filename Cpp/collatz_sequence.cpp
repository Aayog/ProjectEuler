#include <iostream>

using namespace std;

long lengthChain(long num){
    long count = 1;
    while(num > 1){
        if (num % 2 == 0){
            num = num / 2;
        }else{
            num = 3 * num + 1;
        }
        count++;
    }
    // cout << endl;
    return count;
}

long length = 0;

long collatz(long num){
    length++;
    if (num == 1){
        return length;
    }
    if(num % 2 == 0){
        collatz(num / 2);
    }else {
        collatz(num * 3 + 1);
    }
    
}

int main(void){
    long x = 0;
    const long MAX = 1000000;
    long high = 0;
    long ans = 0;
    while (x <= MAX){
        long len = lengthChain(x);
        if(len >= high){
            high = len;
            ans = x;
        }
        x++;
    }
    cout << "high : " << high << " ans: " << ans << endl;

    cout << collatz(837799) << endl;
}