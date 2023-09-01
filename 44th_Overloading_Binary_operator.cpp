//Overloading Binary Operator
#include<iostream>
using namespace std;
class distance
{
    int ft,inch;
    public:
    distance()
    {
    ft=0;
    inch=0;
    }
distance(int f, int i)
{
    ft=f;
    inch=i;
}
void getdata()
{
    cout<<"\nEnter The feet:";
    cin>>ft;
    cout<<"Enter the inches:";
    cin>>inch;
}
void display()
{
    cout<<"feet"<<ft <<"and"<<inch<<"inches"<<endl;
}
distance opreator + (distance);
};
distance distance::operator +(distance d2)
{
    int F=ft+d2.ft;
    float I=inch+d2.inch;
    do
    {
       if(I>=12.0)
    {
        I=I-12.0;
        F ++;
    }
    return distance(F,I);  
    }
    while(I>=12)
    
}
int main()
{
    distance d1,d3,d4;
    d1.getdata();
    distance d2(2,12);
    d3=d1+d2;//d1.operator+(d2);
    d4=d1+d2+d3;//d3.operator+(d3)or(d1+d2).operator +(d3)
    cout<<"\nDistance1=";d1.display();
    cout<<"\nDistance2=";d2.display();
    cout<<"\nDistance3=";d3.display();
    cout<<"\nDistance4=";d4.display();
    return 0;
}
