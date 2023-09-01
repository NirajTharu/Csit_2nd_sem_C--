//Exceptional Handling 2080/05/03
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter any two intigers:"<<endl;
cin>>a>>b;
float x=a-b;
try
{
    if(x!=0)
    {
        cout<<"Result(a/x)="<<a/x<<endl;
    }
    else
    {
        throw x;
    }
}
catch(float i)
{
    cout<<"Exception caught:x="<<x<<endl;
}
return 0;
}