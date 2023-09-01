//Fibonacci Series
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int  l=0,m=1,n,num;
    cout<<"Enter the term limit for fibonacci Series:";
    cin>>num;
    cout<<"Fibonacci Serie upto"<< num<<"th term is:";
    for(int i=2;i<num;i++)
    {
        n=l+m;
        cout<<setw(4)<<n<<"";
        l=m;
        m=n;
    }
    return 0;
}