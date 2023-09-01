//Multiple inheritence
#include<iostream>
using namespace std;
class school
{
    char sname[20];
    int scode;
    public:
    void getdata()
    {
        cout<<"Enter the name and code of the school:"<<endl;
        cin>>sname>>scode;
    }
    void display()
    {
        cout<<"The name of school is:"<<sname<<endl<<"The code of the school is:"<<scode<<endl;
    }
};


class library
{
    int cardn;
    char bookn[20];
    public:
    void getdata1()
    {
        cout<<"Enter the library card number and book name:"<<endl;
        cin>>cardn>>bookn;
    }
    void display1()
    {
        cout<<"The library card number is:"<<cardn<<endl<<"The book name is:"<<bookn<<endl;
    }
};


class student:public school,public library
{
    int roll;
    char name[26];
    public:
    void getdata2()
    {    
        getdata();
        getdata1();    
        cout<<"Enter the name and roll number of student:"<<endl;
        cin>>name>>roll;
    }
    void display2()
    {
        display();
        display1();
        cout<<"The name and roll of student is:"<<name<<"and"<<roll<<endl;
    }
};
int main()
{
    student s;
    s.getdata2();
    s.display2();
    return 0;
}