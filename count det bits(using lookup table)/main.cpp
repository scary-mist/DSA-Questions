//
//  main.cpp
//  count det bits(using lookup table)
//
//  Created by Amartya Vibhu on 02/11/22.
//

#include <iostream>

using namespace std;

int table[256];
void initialise(){
    table[0] = 0;
    for(int i=0; i<256; i++)
    {
        table[i] = (i&1) + table[i/2];
        
    }
    
}
        

int countBits(int n){
    int res = table[n & 0xff];
    n = n>>8;
    res = res+table[n & 0xff];
    n = n>>8;
    res = res+table[n & 0xff];
    n = n>>8;
    res = res+table[n & 0xff];
    return res;
    
}

int main() {
    initialise();
    int n{2};
    cout<<"Number of set bits: "<<countBits(n)<<endl;
    return 0;
}
