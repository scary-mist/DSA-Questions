//
//  main.cpp
//  Count set bit(Brian  kernigam Algo)
// Time Complexity wiil be theta(Set bit count)
//
//  Created by Amartya Vibhu on 02/11/22.
//

#include <iostream>

using namespace std;

int countBit(int n){
    int res{0};
    while(n>0){
        n = (n&(n-1));
        res++;
    }
    return res;
}

int main() {
    int n{0};
    cout<<"Enter the required number: "<<endl;
    cin>>n;
    cout<<"Number of set bits are:  "<<countBit(n)<<endl;
 
    return 0;
}
