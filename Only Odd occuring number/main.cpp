//
//  main.cpp
//  Only Odd occuring number
//
//  Created by Amartya Vibhu on 04/11/22.
//

#include <iostream>
#include<vector>

using namespace std;

int findOdd(int arr[], int n)
{
    int res{0};
    for(int i=0; i<n; i++)
        res = res^arr[i];
    return res;
    
}


int main() {
    /*int n=5;
     vector<int>arr{10,8,10,8,5};
     for(int i=0; i<n; i++)
     {
     int count{0};
     for(int j=0; j<n; j++)
     {
     if(arr[j]==arr[i])
     count++;
     
     }
     if(count%2!=0)
     cout<<"Odd occuring number is: "<<arr[i]<<endl;
     }*/
    int n{5};
    int arr[5] ={10,10,5,8,8};
    cout<<"The only odd digit is: "<< findOdd(arr ,  5)<<endl;
    
    
    return 0;
}
