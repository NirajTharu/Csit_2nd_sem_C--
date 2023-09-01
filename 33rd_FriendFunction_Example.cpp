//Friend Functiion Example
#include<iostream>
using namespace std;
class add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"Enter three Numbers:";
        cin>>a>>b>>c;
    }
    friend int tot(add ad);
};
int tot(add ad)
{
    return int(ad.a+ad.b+ad.c);
}
int main()
{
    add d;
    d.getdata();
    cout<<"The sum of Numbers is:"<<tot(d);
    return 0;
}