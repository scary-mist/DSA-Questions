//
//  main.cpp
//  Josephus Problem
//
//  Created by Amartya Vibhu on 09/11/22.
//

#include <iostream>

using namespace std;

int jos(int n, int k){
    if(n==1)
        return 0;
    else
        return (jos(n-1, k) + k) % n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=5;
    int k=3;
    cout<<jos(n, k)<<endl;
    return 0;
}
