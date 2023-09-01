//Hierarchical Inheritence
#include<iostream>
using namespace std;
class school
{
    char sname[20],sadd[20];
    public:
    void getdata()
    {
        cout<<"Enter the name and address of the school:"<<endl;
        cin>>sname>>sadd;
    }
    void display()
    {
        cout<<"The name and address of the school is:"<<endl<<sname<<endl<<sadd<<endl;
    }
};


class student:public school
{
    int roll;
    char name[25];
    public:
    void getdata1()
    {   
        getdata();
        cout<<"Enter the name and roll number of the student:"<<endl;
        cin>>name>>roll;
    }
    void display1()
    {   
        display();
        cout<<"The name and roll number of the student is:"<<endl<<name<< endl<<roll<<endl;
    }
};


class teacher:public school
{
    int ph;
    char tname[25];
    public:
    void getdata2()
    {
        cout<<"Enter the name and phone Number of the teacher:"<<endl;
        cin>>tname>>ph;
    }
    void display2()
    {
        cout<<"The name and phone Number of the teacher is:"<<endl<<tname<<endl<<ph<<endl;
    }
};
int main()
{
    student s;
    teacher t;
    s.getdata1();
    t.getdata2();
    s.display1();
    t.display2();
    return 0;
}