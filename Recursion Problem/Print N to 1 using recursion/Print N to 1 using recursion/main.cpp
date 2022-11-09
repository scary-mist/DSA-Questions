//
//  main.cpp
//  Print N to 1 using recursion
//
//  Created by Amartya Vibhu on 07/11/22.
//

#include <iostream>
#include <string>

using namespace std;

// Function for printing N to 1.
void printNto1(int n){
    if(n == 0)
        return;
    cout<<n<<" "<<endl;
    printNto1(n-1);
    
}

//Function to print 1 to  N
void print1toN(int n){
    if(n==0)
        return;
    print1toN(n-1);
    cout<<n<<" ";
}
// Function to get factorial of a number

int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

//Function to print nth fibonacci number

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

// Function to get sum of first n natural numbers using recursion

int getSum(int n){
    if(n==0)
        return 0;
    return n+getSum(n-1);
}
// function to check given string is palindrome or not:

bool isPalindrome(string sstr, long int start, long int end){
    if(start>=end)
        return true;
    return ((sstr[start] == sstr[end]) && isPalindrome(sstr, start+1, end-1));
}
// sum of digits of number using recursion

int getSum1(int n){
    if(n==0)
        return 0;
    return getSum1(n/10) + n%10;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printNto1(6);
    print1toN(6);
    cout<<endl;
    cout<<fact(5);
    cout<<endl;
    cout<<fib(5);
    cout<<endl;
    cout<<"Required sum of given number is: "<<getSum(5);
    cout<<endl;
    string sstr;
    cout<<"Enter a string: "<<endl;
    cin>>sstr;
    cout<<"Given string "<<sstr<<" is palindrome: "<<isPalindrome(sstr, 0, (sstr.length()-1))<<endl;
    int n{0};
    cout<<"Enter the required number : "<<endl;
    cin>>n;
    cout<<"Sum of the digits of number "<<n<<" is: "<<getSum1(n)<<endl;
    return 0;
}
