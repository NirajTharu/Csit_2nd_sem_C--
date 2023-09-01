//Function(Method) overriding
#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"You are in base class."<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"You are know in Derived Class."<<endl;
    }
};
int main()
{
    derived d;
    d.display();
    d.base::display();
    return 0;
}