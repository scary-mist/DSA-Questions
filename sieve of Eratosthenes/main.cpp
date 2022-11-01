//
//  main.cpp
//  sieve of Eratosthenes
//
//  Created by Amartya Vibhu on 01/11/22.
//

#include <iostream>
#include<vector>

using namespace std;

bool isPrime(int n){
    int i{0};
    if(n==1)
        return false;
    for(int i{2}; i*i<=n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

void printPrime(int m){
    for(int i{2}; i<=m; i++)
        if(isPrime(i))
            cout<<i<<" ";
            
}

// Seieve algorithm
void seieve(int n){
    vector<bool>isPrimes(n+1,true);
    for(int i{2}; i*i<=n; i++){
        if(isPrimes[i]){
            for(int j = 2*i; j<=n; j=j+i)
                isPrimes[j]=false;
                
        }
    }
    for(int i{2}; i<=n; i++){
        if(isPrimes[i])
            cout<<i<<" ";
    }
    
}

// Seieve algorithm more optimized

void seieve1(int n){
    vector<bool>isPrime1(n+1,true);
    for(int i{2}; i<=n; i++)
    {
        if(isPrime1[i])
        {
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i)
                isPrime1[j]=false;
        }
    }
        
}

int main() {
    int m{0};
    cout<<"Enter the required number: "<<endl;
    cin>>m;
    printPrime(m);
    cout<<endl;
    int n{15};
    
    seieve(n);
    cout<<endl;
    seieve1(n);
    return 0;
}
