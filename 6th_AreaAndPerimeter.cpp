//Using Concept of class for area calculatin
#include<iostream>
using namespace std;
class rect
{
    int l,b;
    public:
    void getdata()
    {
        cout<<"\nEnter the length and breadth for the calculation of area and perimeter:";
        cin>>l>>b;
    }
    void setdata(int a,int c)
    {
        l=a;
        b=c;
    }
    void display()
    {
        cout<<"\nLength:"<<l;
        cout<<"\nBreadth:"<<b;
    }
    void aperia()
    {
        int A,P;
        A=l*b;
        P=2*(l+b);
        cout<<"\nThe Area is:"<<A;
        cout<<"\nThe Perimeter is:"<<P;
    }
};
int main()
{
    rect r0,r1,r2;
    r0.setdata(10,20);
    r0.display();
    r0.aperia();
    r1.setdata(5,4);
    r1.display();
    r1.aperia();
    r2.getdata();
    r2.display();
    r2.aperia();
    return 0;
}