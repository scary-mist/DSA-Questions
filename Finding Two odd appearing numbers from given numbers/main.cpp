//
//  main.cpp
//  Finding Two odd appearing numbers from given numbers
//
//  Created by Amartya Vibhu on 04/11/22.
//

#include <iostream>

using namespace std;

void oddAppearing(int arr[], int n){
    int Xor{0},res1{0},res2{0};
    for(int i=0; i<n; i++)
    {
        Xor = Xor^arr[i];
    }
    int Rbit= Xor & ~(Xor-1);    // Expression is for finding rightmost set bit
    for(int i=0; i<n; i++)
    {
        if((arr[i]&Rbit) != 0)
            res1 = res1^arr[i];
        else
            res2 = res2^arr[i];
    }
    cout<<"Required odd appearing numbers are: "<<res1<<" & "<<res2<<endl;
}

int main(int argc, const char * argv[]) {
    int n=10;
    int arr[]{3,4,3,4,8,4,4,32,7,7};
    oddAppearing(arr, n);
    return 0;
}
