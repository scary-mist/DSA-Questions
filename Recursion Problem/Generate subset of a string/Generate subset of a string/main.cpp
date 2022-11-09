//
//  main.cpp
//  Generate subset of a string
//
//  Created by Amartya Vibhu on 07/11/22.
//

#include <iostream>


using namespace std;

void pSet(string s, int i = 0, string curr = "")
{
    long int n = s.length();
//    base condition
    if(i == n)
    {
        cout<<curr<<endl;
        return;
    }
    
    
//    vgv
    
    pSet(s, i+1, curr+s[i]);
    pSet(s, i+1, curr);
    
    
}
int main() {
    string s = "abc";
    pSet(s,0,"");
    return 0;
}
