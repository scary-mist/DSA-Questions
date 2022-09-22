//
//  main.cpp
//  LCM
//
//  Created by Amartya Vibhu on 21/09/22.
//

#include <iostream>

using namespace std;

// Naive solution O(a*b-max(a,b))
/*
int lcm(int a, int b){
    int res = max(a, b);
    while(true){
        if(a%res==0 && b%res==0)
            return res;
        res++;
    }
}*/

// Effecient method: a*b = gcd(a,b) * lcm(a, b) with O(log(min(a,b)))

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}
int lcm(int a, int b){
    return a*b/gcd(a, b);
}
int main() {
    int a{0},b{0};
    cout<<"Enter the value a and b: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Lcm of a and b is: "<<lcm(a, b)<<endl;
    return 0;
}
