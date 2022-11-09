//
//  main.cpp
//  Rope cutting problem
//
//  Created by Amartya Vibhu on 07/11/22.
//

#include <iostream>
#include <algorithm>

using namespace std;

int maxPieces(int n, int a, int b, int c){
    if(n == 0)
        return 0;
    if(n < 0)
        return -1;
    
    int res = max(maxPieces((n-a), a, b, c), maxPieces((n-b), a, b, c),maxPieces((n-c), a, b, c));
    if(res == -1)
        return -1;
    return (res+1);
}

int main() {
    // insert code here...
    /*int n{0};
    int a{0};
    int b{0};
    int c{0};
    cout<<"Enter the value of n,a, b, c :"<<endl;
    cin>>n>>a>>b>>c;    
    cout<<"Max number of pieces are: "<<maxPieces(n, a, b, c); */
    
    maxPieces(23, 11, 9, 12);
    return 0;
}
