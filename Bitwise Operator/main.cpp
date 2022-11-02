//
//  main.cpp
//  Bitwise Operator
//
//  Created by Amartya Vibhu on 02/11/22.
//

#include <iostream>

using namespace std;

int main() {
    int x{3}, y{6};
    cout<<(x&y)<<endl;
    cout<<(x|y)<<endl;
    cout<<(x^y)<<endl;
    cout<<(x<<y)<<endl;
    int p{33}, q{2};
    cout<<(p>>q)<<endl;
    
//   Bitwise not operator ~
    
    unsigned int m{5};
    cout<<(~m)<<endl;
    
//    Bitwise not operator with signed input
    signed int n{5};
    cout<<(~n)<<endl;
    return 0;
}
