// Call by reference
#include<iostream>
#include<iomanip>
using namespace std;
int swap(int*m,int*n);
int swap(int*m,int*n)
{
    int x=*m;
    *m=*n;
    *n=x;
    return 0;
}
int main()
{
    int a=5;
    int b=65;
    cout<<"The value of actual parameters:\n";
    cout<<"Before call"<<"a="<<a<<setw(5)<<"b="<<b<<"\n";
    swap(&a,&b);
    cout<<"\n"<<"After call"<<"a="<<a<<setw(5)<<"b="<<b<<"\n";
    cout<<"Yes The change is seen";
    return 0;
}