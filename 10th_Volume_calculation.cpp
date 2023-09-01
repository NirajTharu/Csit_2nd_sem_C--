//Volume Calculation
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,vol;
    cout<<"Enter the length,breadth,height of the object whose volume you want to know:";
    cin>>l>>b>>h;
    vol=l*b*h;
    cout<<"The volume of the object According to your data is:"<<vol;
    return 0;
}
