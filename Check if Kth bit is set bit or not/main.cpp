//
//  main.cpp
//  Check if Kth bit is set bit or not
//
//  Created by Amartya Vibhu on 02/11/22.
//

#include <iostream>

using namespace std;

// Using left shift operator
void kthBit(int n, int k){
    if(n & (1 << (k-1)) != 0)
        cout<<"Yes";
    else
        cout<<"No";

}

// using right shift

void rkthBit(int n, int k){
    if((n>>(k-1) & 1 == 1))
       cout<<"Yes";
    else cout<<"No";
       
}

int main() {
    int n{0},k{0};
    cout<<"Enter the value of n and k :"<<endl;
    cin>>n>>k;
    cout<<"Number "<<n<<", "<<k<<"th bit is set bit: ";
    kthBit(n, k);
    cout<<endl;
    rkthBit(n, k);
    cout<<endl;
    return 0;
}
