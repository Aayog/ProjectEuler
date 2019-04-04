#include <iostream>
#include <string>

using namespace std;

bool isprime(long n){
    if (n == 2 || n == 3){
        return true;
    }
    if ((n % 2 == 0) || (n % 3 == 0)){
        return false;
    }
    long i = 5;
    long w = 2;
    while ((i * i) <= n){
        if (n % i == 0){
            return false;
        }
        i += w;
        w = 6 - w;
    }
    return true;
}

int main(int argc, char **argv){
    long n = 0;
    if (argc == 2){
        n = stol(argv[1]);
    }else{
        cout << "Invalid usage of ./primefactor .\nUsage: ./primefactor number" << endl;
        return 1;
    }
    if(isprime(n)){
    	cout << n << " is a prime number!" << endl;
	return 0;
    }
    long i = 2;
    for (i = 2; i < n/2+1; i++){
        if (isprime(i)){
            while (n % i == 0){
                n /= i;
                cout << "i : " << i << " n : " << n << endl;
            }
        }
    }
    if (n == 1){
        n = --i;
    }
    cout << "Largest prime factor : "  << n  << endl;
}
