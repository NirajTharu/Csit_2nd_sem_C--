//Composition And Aggregation
/* Both composition and aggregation are the types of association that are used to represent the relationships between
two classes. The most significant difference that you should note here is that Composition is denoted by a filled diamond,
whereas Aggregation is denoted by an empty diamond */
#include<iostream>
using namespace std;
class college
{
    private:
    int ccode;
    char cname[25];
    public:
    void getinfo()
    {
        cout<<"Enter the name and code of the college:"<<endl;
        cin>>cname>>ccode;
    }
    void showinfo()
    {
        cout<<"The name and code of the college is:"<<cname<<endl<<ccode<<endl;
    }
};
class student
{   
    private:
    int roll;
    char sname[25];
    college c;
    public:
    void getinfo0()
    {   
        c.getinfo();
        cout<<"Enter the name and roll number of the student:"<<endl;
        cin>>sname>>roll;
    }
    void showinfo0()
    {   
        c.showinfo();
        cout<<"The name and roll Number of the student is:"<<sname<<endl<<roll<<endl;
    }
};
class teacher
{   
    private:
    char tname[25];
    int id;
    student s;
    public:
    void getinfo1()
    {   
        s.getinfo0();
        cout<<"Enter the name and Id of the teacher:"<<endl;
        cin>>tname>>id;
    }
    void showinfo1()
    {   
        s.showinfo0();
        cout<<"The name and id of the teacher is:"<<tname<<endl<<id<<endl;
    }
};
int main()
{
    teacher t;
    t.getinfo1();
    t.showinfo1();
    return 0;
}