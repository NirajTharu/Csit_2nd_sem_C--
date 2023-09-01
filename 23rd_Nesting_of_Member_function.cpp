//Nesting of Member Function
#include<iostream>
using namespace std;
class oddeve
{
    int x;
    int check();
    public:
    void getdata();
    void showdata();
};
int oddeve::check()
{
    if (x%2==0)
    cout<<"Even";
    else
    cout<<"Odd";
    return 0;
}
void oddeve::getdata()
{
    cout<<"Enter any number:";
    cin>>x;
}
void oddeve::showdata()
{
    cout<<"The given number is:";
    check();//The member function call with in member function
}
int main()
{
    oddeve e;
    e.getdata();
    e.showdata();
    return 0;
}