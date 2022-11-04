//
//  main.cpp
//  Power of 2
//
//  Created by Amartya Vibhu on 04/11/22.
//

#include <iostream>

using namespace std;

bool ispow2(int n){
    if(n == 0)
        return false;
    return ((n & (n-1)) == 0);
       
}

int main(){
    int n{0};
    cout<<"Enter the required number: "<<endl;
    cin>>n;
    cout<<"Number "<<n<<" is power of 2: ";
    cout<<ispow2(n);
    cout<<endl;
    return 0;
}
