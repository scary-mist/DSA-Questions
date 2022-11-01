//
//  main.cpp
//  All Divisor of a Number
//
//  Created by Amartya Vibhu on 01/11/22.
//

#include <iostream>
using namespace std;

void printDivisor(int n)
{
    for(int i{1}; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                cout<<" "<<i<<endl;
            else
                cout<<" "<<i<<" "<<n/i<<endl;
        }
    }
           
}



int main() {
    int n{0};
    cout<<"Enter the required number:"<<endl;
    cin>>n;
    cout<<"Divisors of "<<n<<" are:"<<endl;
    printDivisor(n);
    
    return 0;
}
