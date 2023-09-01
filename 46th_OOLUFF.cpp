//Operator overloading using friend Function
#include<iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex (){}
    complex (float r,float i)
    {
        x=r;
        y=i;
    }
    friend complex operator +(complex,complex);
    void display();
};
complex operator + (complex a,complex b)
{
    return complex(a.x+b.x),(a.y+b.y);
}
void complex::display()
{
    cout<<x<<"+j"<<y<<"\n";
}
int main()
{
    complex c1,c2,c3;
    c1=complex(3.5,3.5);
    c2=complex(1.5,1.5);
    c3=operator + (c1,c2);
    cout<<"c1= ";c1.display();
    cout<<"c2= ";c2.display();
    cout<<"c3= ";c3.display();
    return 0;
}