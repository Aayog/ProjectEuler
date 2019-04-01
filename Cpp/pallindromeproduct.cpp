#include <iostream>

using namespace std;

bool ispallindrome(int num) {
    int temp = num;
    int b=0,c=0;
    while(temp != 0) {
        b = temp % 10;
        c = c * 10 + b;
        temp /= 10;
    }
    return (c == num);
}

int main(void) {
    int highest = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int prod = i * j;
            if (ispallindrome(prod)) {
                if (prod > highest) {
                    highest = prod;
                }
            }
        }
    }
    cout << highest <<endl ;

}
