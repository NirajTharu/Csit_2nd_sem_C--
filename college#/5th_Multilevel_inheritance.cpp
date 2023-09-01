//Multilevel inheritance
#include<iostream>
using namespace std;
class college
{
    char cn[25],ad[25];
    public:
    void getdata()
    {
        cout<<"Enter the name and address of the college:"<<endl;
        cin>>cn>>ad;
    }
    void display()
    {
        cout<<"The name and address of the college is:"<<cn<<endl<<ad<<endl;
    }
};


class ecurri:public college
{
    int fee;
    char gamename[25];
    public:
    void getdata1()
    {
        cout<<"Enter the name of the game and fee used in the game:"<<endl;
        cin>>gamename>>fee;
    }
    void display1()
    {
        cout<<"The name of the game and fee used is:"<<gamename<<endl<<fee<<endl;
    }
};


class student:public ecurri
{
    int roll;
    char studentname[25];
    public:
    void getdata2()
    {   getdata();
        getdata1();
        cout<<"Enter the name and roll Number of the student:"<<endl;
        cin>>studentname>>roll;
    }
    void display2()
    {   
        display();
        display1();
        cout<<"The name and roll Number of the student is:"<<studentname<<endl<<roll<<endl;
    }
};
int main()
{
    student s;
    s.getdata2();
    s.display2();
    return 0;
}