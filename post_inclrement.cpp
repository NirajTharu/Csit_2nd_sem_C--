//Program for post_increment
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator ++()
    {
         a ++;
         b ++;
    }
    void display()
    {
        cout<<"The value of a="<<a<<"and b="<<b;
    }
};
int main()
{
    test t1(2,4);
    ++ t1;
    t1.display();
    return 0;
}