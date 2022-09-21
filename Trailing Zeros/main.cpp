//
//  main.cpp
//  Trailing Zeros in factorial
//
//  Created by Amartya Vibhu on 17/09/22.
//

#include <iostream>

using namespace std;
// Naive method as overflow of data with time comp: O(n)
/*int countZeros(int n){
    int fact = 1;
    for(int i{2}; i<=n; i++){
        fact = fact * i;
    }
    int res{0};
    while(fact%10 == 0){
        res++;
        fact = fact/10;
    }
    return res;
}*/
// Efficient method with time complexity O(log(n))
int countZeros(int n){
    int res{0};
    for(int i{5}; i<=n; i=i*5){
        res = res+ n/i;
    }
    return res;
}

int main(){
    int n{0};
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Trailing Zeros in factorial are: "<<countZeros(n)<<endl;
    return 0;
}
