//Area Calculation Using the concept of Function
#include<iostream>
using namespace std;
int area(int l,int b);
int main()
{
    int x,y;
    cout<<"Input ReQuired\n";
    cout<<"Enter the length and breadth of object for the Area Calculation:";
    cin>>x>>y;
    cout<<"The Area of object is:"<<area(x,y)<<"Sq.unit";
    return 0;
}
int area(int l,int b)
{
    return(l*b);
}