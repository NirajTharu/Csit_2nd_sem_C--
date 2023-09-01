//7th Generating Multiplicatin Table Uisng concept of class
#include<iostream>
using namespace std;
class multable
{
    int a,i,c;
    public:
    void getdata()
    {
        cout<<"\nEnter the Number Whose Multiplicatin table you want:";
        cin>>a;
    }
    void table();
};
void multable::table()
{
    int m=0;i=1;
    cout<<"The Multiplication table of "<<a<<" is:\n";
    while(i<=10)
    {
        c=a*i;
        cout<<"\n";
        cout<<a<<"*"<<i<<"="<<c;
        i=i+1;
    }
}
int main()
{
    multable m1;
    m1.getdata();
    m1.table();
    return 0;
}