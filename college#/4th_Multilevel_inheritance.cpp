//Multilevel inheritance Implimentation code
#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void setroll(int);
    void putroll();
};
void student::setroll(int a)
{
    roll=a;
}
void student::putroll()
{
    cout<<"Roll Number:"<<roll<<endl;
}
class test:public student
{
    protected:
    float sub1,sub2;
    public:
    void setmark(float,float);
    void putmark();
};
void test::setmark(float x,float y)
{
    sub1=x;
    sub2=y;
}
void test::putmark()
{
    cout<<"Marks in first subject is:"<<sub1<<endl;
    cout<<"Marks in second subject is:"<<sub2<<endl;
}
class result:public test
{
    float total;
    public:
    void display();
};
void result::display()
{
    total=sub1+sub2;
    putroll();
    putmark();
    cout<<"Total Marks is:"<<total<<endl;
}
int main()
{
    result r;
    r.setroll(150);
    r.setmark(99,98);
    r.display();
    return 0;
}