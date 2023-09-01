//Volume of any object using function
#include<iostream>
using namespace std;
int volume(int l,int b,int h);
int main()
{
    int x,y,z;
    cout<<"Enter the length,breadth,heigth of the object for clacualtion of volume:";
    cin>>x>>y>>z;
    cout<<"The volume of the object using given information is:"<<volume(x,y,z);
    return 0;
}
int volume(int l,int b,int h)
{
    return(l*b*h);
}