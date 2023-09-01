//Calculation of volume using constructor
#include<iostream>
using namespace std;
class volume
{
    int l,b,h;
    int vol;
    public:
    volume(int x,int y, int z);
    void result();
};
volume::volume(int x, int y, int z)
{
    l=x;
    b=y;
    h=z;
}
void volume::result()
{
    cout<<"The length, breadth and height are:"<<l<<b<<h<<"\n";
    vol=l*b*h;
    cout<<"\nThe volume is:"<<vol;
}
int main()
{
    int l,b,h;
    cout<<"Enter the length,breadth and heigth:";
    cin>>l>>b>>h;
    volume v(l,b,h);
    v.result();
    return 0;
}