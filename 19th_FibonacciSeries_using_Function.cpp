//Fibonacci Series Using Concept of Function
#include<iostream>
#include<iomanip>
using namespace std;
int fibo(int);
int main()
{
    int n;
    cout<<"Enter the terms for fiboncci Series:";
    cin>>n;
    cout<<"The Fibonacci Series upto"<<n<<"th term is:";
    for(int i=0;i<n;i++)
    cout<<setw(5)<<fibo(i);
    return 0;
}
int fibo(int n)
{
    if(n<=1)
    return n;
    else
    return fibo(n-1)+fibo(n-2);
}