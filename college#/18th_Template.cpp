//Template Class Template
#include<iostream>
using namespace std;
template<class t>
class A
{
    t a,b;
    public:
    A( t x,t y)
    {
    a=x;
    b=y;
    }
    void display()
    {
        cout<<a<<"      "<<"and"<<"      "<<b<<endl;
    }
};
int main()
{
    A<int>obj1(5,8);
    obj1.display();
    A<float>obj2(99.99,44.88);
    obj2.display();
    A<char>obj3('a','H');
    obj3.display();
    return 0;

}