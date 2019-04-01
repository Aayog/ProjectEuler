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
    long N = 100; 
    if(argc == 2){
        N = stol(argv[1]);
    }
    long sum = 0;
    for (long i = 2; i < N; i++){
        if(isprime(i)){
            sum += i;
        }
    }
    cout << "Summation of primes below " << N << " is " << sum << endl;
    
    
}