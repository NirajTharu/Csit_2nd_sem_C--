//Pointer to base class
//Perimeter of the square
#include<iostream>
using namespace std;
class shape
{
    protected:
    float l,p;
    public:
    void setdata(float x)
    {
        l=x;
    }
};
class square:public shape
{
    public:
    void peri()
    {
        p=4*l;
        cout<<"The perimeter of the square is:"<<p<<endl;
    }
};
int main()
{
    shape *sp;
    square s;
    sp=&s;
    sp->setdata(3);
    s.peri();
    return 0;
}