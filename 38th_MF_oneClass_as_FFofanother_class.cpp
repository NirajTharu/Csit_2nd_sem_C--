//Member function of one class can be used as the Friend Function of another class(example)
#include<iostream>
using namespace std;
class second;//Forward Decleration of class
class first
{
    public:
    void show(second);//Member Function of first class
};
class second
{
    int age, roll;
    char name[22],add[25];
    public:
    void getdata()
    {
        cout<<"Enter the name,address, age and roll number:\n";
        cin>>name>>add>>age>>roll;
    }
    friend void first::show(second);//Member Function of first class as FF of second class deceleration.
    };
    void first::show(second s) //Friend Function Defination
    {
        cout<<"\nThe name is:"<<s.name;
        cout<<"\nThe address is:"<<s.add;
        cout<<"\nThe age is:"<<s.age;
        cout<<"\nThe Roll number is:"<<s.roll;
    }
    int main()
    {
        first f;
        second s;
        s.getdata();
        f.show(s);   //FF call by the help of object of first.
        return 0;
    }

