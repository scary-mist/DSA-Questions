//
//  main.cpp
//  Palidrome(Numbers)
//
//  Created by Amartya Vibhu on 14/09/22.
//

#include <iostream>

using namespace std;

bool isPal(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    return(rev == n);
}

int main()
{
    int n{0};
    cout<<"Enter the value of digit:"<<endl;
    cin>>n;
    if(isPal(n)==1){
        cout<<"Yes"<<endl;
    }
    
    else
        cout<<"no"<<endl;

    return 0;
}
