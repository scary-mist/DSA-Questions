//
//  main.cpp
//  Power of a number
//
//  Created by Amartya Vibhu on 01/11/22.
//

#include <iostream>

using namespace std;

// O(n)
void calPower(int x, int n){
    int res{1};
    for(int i{0}; i<n; i++)
    {
        res = res*x;
    }
    cout<<res<<endl;
}

// More effecient way to calculate power of a number  O(log(n))

int power(int x, int n){
    if(n==0)
        return 1;
    int temp = power(x, n/2);
    temp = temp * temp;
    if(n%2==0)
        return temp;
    else
        return temp * x;
    
}

int main() {
    cout<<"Enter the required number and power: "<<endl;
    int x,n;
    cin>>x>>n;
    cout<<x<<" to power "<<n<<" is equal to: ";
    calPower(x,n);
    cout<<endl;
    int y{10},z{2};
    cout<<power(y, z)<<endl;
    return 0;
}
