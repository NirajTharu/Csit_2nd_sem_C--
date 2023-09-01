//Using Friend Function in multiple class
#include<iostream>
using namespace std;
class csit1;
class csit2
{
    int b,g;
    public:
    void getdata()
    {
        cout<<"Enter the number of boys  and girls in 2nd Semster:\n";
        cin>>b>>g;
    }
    friend int addb(csit2,csit1);
    friend int addg(csit2,csit1);
};
class csit1
{
    int b,g;
    public:
    void getdata()
    {
        cout<<"Enter the number of boys and girls in 1st semester:"<<endl;
        cin>>b>>g;
    }
    friend int addb(csit2,csit1);
    friend int addg(csit2,csit1);
};
int addb(csit2 x,csit1 y)
{
    return (x.b+y.b);
}
int addg(csit2 x,csit1 y)
{
    return (x.g+y.g);
}
int main()
{
    csit1 c;
    csit2 c1;
    c.getdata();
    c1.getdata();
    cout<<"The total number of boys are:"<<addb(c1,c)<<endl;
    cout<<"The total number of girls are:"<<addg(c1,c);
    return 0;
}