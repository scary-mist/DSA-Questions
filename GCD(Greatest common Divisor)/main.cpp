//
//  main.cpp
//  GCD(Greatest common Divisor)
//  Euclidean Algo.
//  Created by Amartya Vibhu on 21/09/22.
//

#include <iostream>

using namespace std;

// Naive solution time comp: O(min(a,b))
/*int gcd(int a, int b){
    int res = min(a, b);
    while (res>0){
        if(a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}*/

//Euclidean Algo

int gcd(int a, int b){
    if(b == 0)
        return  a;
    else
        return gcd(b, a%b);
}


int main() {
    int a{0},b{0};
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"GCD is: "<<gcd(a, b)<<endl;
    return 0;
}
