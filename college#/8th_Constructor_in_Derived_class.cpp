//Constructor in Derive Class
#include<iostream>
using namespace std;
class base
{
    protected:
    int First;
    public:
    base(int a)
    {
        First=a;
    }
};
class derived:public base
{
    int second;
    public:
    derived(int a,int b):base(a)
    {
        second=b;
    }
    void display()
    {
        cout<<"The 1st value is:"<<First<<endl<<"The 2nd Value is:"<<second<<endl;
    }
};
int main()
{
    derived q(11,99);
    q.display();
    return 0;
}