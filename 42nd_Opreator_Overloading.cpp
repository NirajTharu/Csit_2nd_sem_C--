//Overloading Unary Operator(The operator which can perform its operation in single operend).
#include<iostream>
using namespace std;
class sample
{
    int x,y,z;
    public:
    void setdata(int a,int b,int c);
    void display();
    void operator - ();
};
void sample::setdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void sample::display()
{
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<" "<<endl;
}
void sample::operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    sample s;
    s.setdata(10,-20,30);
    cout<<"s:";
    s.display();
    -s;
    cout<<"s:";
    s.display();
    return 0;
}