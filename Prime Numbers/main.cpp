//
//  main.cpp
//  Prime Numbers
//
//  Created by Amartya Vibhu on 31/10/22.
//

#include <iostream>

using namespace std;

// As divisor is always present in pair,
//so the time complexity of this function will be O(n^1/2)


bool isPrime(int n){
    if (n == 1)
        return false;
    for(int i{2}; i*i<n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n{0};
    cout<<"Enter the number to be checked: "<<endl;
    cin>>n;
    cout<<"Given number is Prime : -> "<<isPrime(n)<<endl;
    return 0;
    
}
