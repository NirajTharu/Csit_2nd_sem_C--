//Class with constructor
/* A constructor is a special “MEMBER FUNCTION” in C++ that has the same name as the class it belongs to and is 
used to initialise some useful values for an object’s data members. The constructor is used to INITIALIZE VALUES and is 
automatically called by the compiler, which is why constructor is used in c++.*/
#include<iostream>
using namespace std;
class intiger
{
    int m,n;
    public:
    intiger(int,int);
    void display()
    {
        cout<<"m="<<m<<"\n";
        cout<<"n="<<n;
    }
};
intiger::intiger(int x,int y)
{
    m=x;
    n=y;
}
int main()
{
    intiger int1(0,100);
    intiger int2(35,50);
    cout<<"\nObject 1:"<<"\n";
    int1.display();
    cout<<"\nObject2:"<<"\n";
    int2.display();
    return 0;
}