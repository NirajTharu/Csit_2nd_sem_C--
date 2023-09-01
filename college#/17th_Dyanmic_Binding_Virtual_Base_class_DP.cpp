
//Dymaic Binding, Dynamic polymorphism,Virtual base class
#include<iostream>
using namespace std;
class Apple
{
    public:
    virtual void display()
    {
        cout<<"This one is from the base Class Apple"<<endl;
    }
    virtual void showdata()
    {
        cout<<"This one is from the base class APPLE"<<endl;
    }
};
class Banana:public Apple
{
    void display()
    {
        cout<<"This one is from the Derived Class Banana"<<endl;
    }
    void showdata()
    {
        cout<<"This one is from the Derived class BANANA"<<endl;
    }
};
class Cherri:public Apple
{
    void display()
    {
        cout<<"You Are Again in Derived Class Cherri"<<endl;
    }
    void showdata()
    {
        cout<<"You Are Again in Derived Class CHERRI"<<endl;
    }
};
int main()
{   
    Apple *A;
    Apple a;
    Banana b;
    Cherri c;
    A=&a;
    A->display(); 
    A->showdata(); 
    A=&b;
    A->display();
    A->showdata(); 
    A=&c;
    A->display();
    A->showdata(); 
    return 0;
}