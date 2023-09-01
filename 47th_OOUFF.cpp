//Operator Overaloading using the Friend Function
#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
    sum(){}//constructor
    sum(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" ";
        cout<<b<<"\n";
    }
    friend sum operator +(sum s1,sum s2);//Friend Function
    sum operator -(sum s2);
    sum operator =(sum s2);
    sum operator ++();
};
sum operator +(sum s1,sum s2)//+ is overloaded using friend Function
{
    sum s;
    s.a=s1.a+s2.a;
    s.b=s1.b+s2.b;
    return s;
}
sum sum ::operator -(sum s2)//Overload - for sum
{
    sum s;
    s.a=a-s2.a;
    s.b=b-s2.b;
    return s;
}
sum sum::operator=(sum s2)// overloaded Assignment operator(=) for sum
{
    a=s2.a;
    b=s2.b;
    return *this;
}
sum sum::operator ++()//Overloaded ++ for sum
{
    a++;
    b++;
    return *this;
}
int main()
{
    sum s1(30,20),s2(60,60);
    s1=s1+s2;
    s1.show();
    return 0;
}