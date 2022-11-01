//
//  main.cpp
//  Prime Factor
//
//  Created by Amartya Vibhu on 31/10/22.
//

#include <iostream>

using namespace std;
bool isPrime(int n);
void primeFactor(int n);


bool isPrime(int n){
    if (n == 1)
        return false;
    for(int i{2}; i*i<n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
// O(n^2 log(n))
// Naive solution
void primeFactor(int n)
{
    for(int q{2}; q<n; q++)
    {
        if(isPrime(q))
        {
            int x = q;
            while(n%x==0)
            {
               cout<<q<<" ";
                x=x*q;
            }
        }
    }
}
// Effecient Solution
void printPrimeFactor(int n){
    if(n<=1)
        return;
    for(int i{2}; i*i<n; i++){
        while(n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1)
        cout<<n;
}
//More  optimization Time Complexity is O(n^1/2)

void ePrintPrimeFactors(int n)
{
    if(n<=1)
        return;
    while(n%2==0)
    {
        cout<<2<<endl;
        n = n/2;
    }
    while(n%3==0)
    {
        cout<<3<<endl;
        n = n/3;
    }
    for(int i{5}; i*i<n; i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<endl;
            n=n/(i+2);
        }
        
    }
    if(n>3)
        cout<<n;
}

int main()
{
    int n{0};
    cout<<"Enter the required number: "<<endl;
    cin>>n;
    cout<<"Prime facors of  "<<n<<" are : "<<endl;
    primeFactor(n);
    cout<<endl;
    int a{120};
    cout<<"Prime facors of  "<<a<<" are: "<<endl;
    printPrimeFactor(a);
    cout<<endl;
    int b{130};
    cout<<"Prime facors of  "<<b<<" are : "<<endl;
    ePrintPrimeFactors(b);
    cout<<endl;
    
    return 0;
}
