//
//  main.cpp
//  Tower of hanoi
//
//  Created by Amartya Vibhu on 09/11/22.
//

#include <iostream>
#include <string>

using namespace std;

void TOH(int n, char A, char B, char C){
    if(n == 1){
        cout<<"Move 1 from "<< A <<" To "<< C <<endl;
        return;
        
    }
    TOH(n-1, A, C, B);
    cout<<"Move "<<n<<" from "<<A<<" To "<<C<<endl;
    TOH(n-1, B, A, C);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n{4};
    
    
    TOH(n, 'A', 'B', 'C');
    return 0;
}
