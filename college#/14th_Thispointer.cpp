//Program to understand the concept of "this" pointer
#include<iostream>
using namespace std;
class thispointer
{
    int a;
    public:
    void test()
    {
        cout<<"The value of a is:"<<endl;
        this->a=10;
        cout<<this->a;
    }
};
int main()
{
    thispointer t;
    t.test();
    return 0;
}