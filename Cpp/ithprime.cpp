#include <iostream>
#include <string>

using namespace std;

bool isprime(long n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if ((n % 2 == 0) || (n % 3 == 0)) {
        return false;
    }
    long i = 5;
    long w = 2;
    while ((i * i) <= n) {
        if (n % i == 0) {
            return false;
        }
        i += w;
        w = 6 - w;
    }
    return true;
}

int main(int argc, char **argv) {
    int N = 100;
    if (argc == 2) {
        N = atoi(argv[1]);
    } else {
        cout << "Usage error\nUse: .\\ithprime number" << endl;
        return 1;
    }

    int count = 0;
    int i = 2;
    while(count < N) {
        if(isprime(i)) {
            count++;
        }
        i++;
    }
    cout << --i << endl;
}