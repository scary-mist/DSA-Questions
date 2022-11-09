//
//  main.cpp
//  Recurison q1
//
//  Created by Amartya Vibhu on 07/11/22.
//

#include <iostream>

using namespace std;
//This function is for floor value of log bade 2 of a number.
/*void fun(int n){
    if(n == 0)
        return;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}*/

// This function is for decimal to binary conversion

void fun1(int n){
    if(n==0)
        return;
    fun1(n/2);
    cout<<(n%2);
}

int main() {
    int n{7};
//    fun(3);
    fun1(7);

    return 0;
}
