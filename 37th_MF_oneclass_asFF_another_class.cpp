//Member Function of one class as FF of another class
#include<iostream>
using namespace std;
class two;
class one
{
    public:
    void fun(two);
};
class two
{
    int vol;
    public:
    friend void one::fun(two);
};
void one::fun(two t)
{
    t.vol=20;
    cout<<"The value is:"<<t.vol;
}
int main()
{
    one o;
    two t;
    o.fun(t);
    return 0;
}