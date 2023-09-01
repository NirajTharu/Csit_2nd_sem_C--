//Overloading binary operator Adding two complex numbers
#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
    complex () {}
    complex (float r, float i)
    {
        x=r;
        y=i;
    }
    complex operator +(complex);
    void display();
};
complex complex::operator +(complex c)
{
complex d;
d.x=x+c.x;
d.y=y+c.y;
return(d);
}
void complex::display()
{
    cout<<x<<"+j"<<y<<"\n";
}
int main()
{
    complex c1,c2,c3;
    c1=complex (2.5,1.5);
    c2=complex (1.5,2.5);
    c3=c1+c2; //calls operator +() function equivalent to c3=c1.operator+(c2);
    cout<<"c1= ";c1.display();
    cout<<"c2= ";c2.display();
    cout<<"c3= ";c3.display();
    return 0;
}