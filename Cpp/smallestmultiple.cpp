#include <iostream>

using namespace std;

bool ismultiple(long num, long prod = 20){
    for (long i = 2; i < prod; i++){
        if (num % i != 0){
            return false;
        }
    }
    return true;
}

int main(void){
    long max_iter = 10000000000;
    long index =  2;
    long smallest = max_iter;
    while(index < max_iter){
        if(ismultiple(index)){
            if (index < smallest){
                smallest = index;
                break;
            }
        }
        index++;
    }
    if (smallest == max_iter){
        return 0;
    }
    cout << smallest << endl;

}