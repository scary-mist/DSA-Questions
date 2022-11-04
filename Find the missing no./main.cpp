//
//  main.cpp
/*  Find the missing no. from arry of n number that has value ranging from n to n+1. Every no. appears only once*/
//
//  Created by Amartya Vibhu on 04/11/22.
//

#include <iostream>

using namespace std;

int missNo(int arr[],int n)
{
    int res{0};
    
    for(int i=1; i<n; i++)
        res = i^arr[i];
    return (res^(n+1)^arr[0]);

}
int main() {
    int n=8;
    int arr[]{1,2,3,4,5,9,8,7};
    cout<<"Missing number is: "<<missNo(arr, 5)<<endl;
    return 0;
}
