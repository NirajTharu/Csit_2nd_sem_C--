//Overloaded Constructor Example
#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
        h=0;
        m=0;
        s=0;
    }
    Time(int x,int y, int z)
    {
        h=x;
        m=y;
        s=z;
    }
    Time(Time & t)
    {
        h=t.h;
        m=t.m;
        s=t.s;
    }
    void display()
    {
        cout<<h<<":hours\n";
        cout<<m<<":minutes\n";
        cout<<s<<":seconds\n";
    }
};
int main()
{
    Time t1,t2(1,15,50),t3(t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}