//Constructor in Derived class(Question of 2068)
#include<iostream>
using namespace std;
class shape
{   
    protected:
    int s1,s2;
    public:
    shape(int x,int y)
    {
        s1=x;
        s2=y;
    }
    void display()
    {
        cout<<"The information is about shape:";
    }
};


class triangle:public shape
{
    int b,h,areat;
    public:
    triangle(int a,int b):shape(a)
    {
        b=a;
    }
    void show1()
    {
        cout<<"This is Triangle:"<<endl;
        cout<<"The Base and Height of the Triangle is:"<<b"and"<h<<endl;
    }
     void triangle:areat()
    {
        areat=(b*h)/2;
        cout<<"The area of the triangle is:"<<areat<<endl;
    }
    
} ;
class rectangle:publi shape
{
    int lr,br,arear;
    public:
    rectangle(int a,int b,int r,int s):shape(a,b)
    {
        lr=r;
        br=s;
    }
    void show2()
    {
        cout<<"This is rectangle."<<endl;
        cout<<"The length and breadth of are:"<<lr<<endl<<br<<endl; 
    }
    void rectangle::arear()
    {
        arear=lr*br;
        cout<<"Area of the rectangle is:"<<arear<<endl;
    }
};
int main()
{
    int a,b,r,s,x,y;
    cout<<"Enter the base,height,length and breadth for the shape:"<<endl;
    cin>>p>>q>>r>>s;
    triangle t(a,b,p,q);
    t.display();
    t.show1();
    t.areat();
    rectangle re(a,b,r,s);
    re.display();
    re.show2();
    re.arear();
    return 0;
}