//
//  main.cpp
//  Power Set using bitwise operator
//
//  Created by Amartya Vibhu on 04/11/22.
//

#include <iostream>
#include<string>
#include<math.h>

using namespace std;

void printPowerset(string str)
{
    unsigned long int n = str.length();
    int powSize = pow(2, n);
    for(int counter{0}; counter<powSize; counter++)
    {
        for(int j{0}; j<n; j++)
        {
            if((counter & (1<<j)) != 0)
                cout<<str[j];
        }
        cout<<endl;
    }
}

int main() {
    string str = "abc";
    printPowerset(str);
    return 0;
}
