#include <iostream>
#include <cstdlib>

using namespace std;

int sumOfSquare(int n){
    return ((n * (n + 1) * (2 * n + 1)) / 6 );
}

int sumOfNatural(int n){
    return ((n * (n + 1)) / 2);
}

int main(int argc, char **argv){
    int N = 100;
    if (argc == 2){
        N = atoi(argv[1]);
    }else{
        cout << "Usage error\nUse: .\\sumofsquares number" << endl;
        return 1;
    }
    
    int difference  = (sumOfNatural(N) * sumOfNatural(N)) - sumOfSquare(N);
    
    cout << "Difference (1 + 2 + ... + " << N << ")^2 && (1^2 + 2^2 + .... + " << N <<"^2 = " << difference << endl;
    return 0;
}