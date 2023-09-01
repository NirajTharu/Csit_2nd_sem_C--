//Factorial of integer number using do loop
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"Enter the positive number only Whose factorial you want to know:";
    cin>>n;
    do
    {
        fact=fact*i;
        i=i+1;
    }
    while(i<=n);
    cout<<"The Factorial of "<<n<<"is="<<fact;
    return 0;
}