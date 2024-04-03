#include <iostream>

bool ispallindrome(int num){
    int reversed = 0;
    int original = num;
    while(num > 0){
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return (reversed == original);
}

int main(void){
    int highest = 0;
    for (int i = 999; i >= 100; i--){
        // if when the highest possible product is less than the current highest, break
        if (i * 999 < highest){
            break;
        }
        for (int j = 999; j >= 100; j--){
            int prod = i * j; 
            if (prod < highest) break; // if the product is less than the highest, break
            if (ispallindrome(prod)){
                highest = prod;
            }
        }
    }
    std::cout << highest << std::endl ;

}
