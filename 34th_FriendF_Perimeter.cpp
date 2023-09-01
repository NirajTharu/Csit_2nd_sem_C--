//With The Help of Friend Function Calculating The perimeter
#include<iostream>
using namespace std;
class rect
{
    int l,b;
    public:
    void getdata()
    {
        cout<<"Enter the length and breadth:";
        cin>>l>>b;
    }
    friend int peri(rect m);
};
int peri(rect m)
{
    return(2*(m.l+m.b));
}
int main()
{
    rect ma;
    ma.getdata();
    cout<<"The Perimeter is:"<<"\n"<<peri(ma);
    return 0;
}