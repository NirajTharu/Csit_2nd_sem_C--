//Inheritance is concept of reuseability of code
#include<iostream>//Preprocessor directive
using namespace std;//using namespace std means that we can use names for objects and variables from the standard library. 
class student //a group of objects that share common properties and behavior is known as class.
{
    int marks1;
    public:
    int marks2;
    void setm();
    int getm();
    void displaym();
};
class result:public student
{
    int total;
    public:
    void sum();
    void display();
};
void student::setm()
{
    marks1=70;
    marks2=80;
}
int student::getm()
{
    return marks1;
}
void result::sum()
{
    total=marks2+getm();
}
void result::display()
{
    cout<<"Marks2="<<marks2<<endl;
    cout<<"Totlal="<< total<<endl;
}
void student::displaym()
{
    cout<<"Marks1="<<marks1<<endl;
}
int main()
{
    result r;
    r.setm();
    r.sum();
    r.displaym();
    r.display();
    r.marks2=90;
    r.sum();
    r.display();
    return 0;
}

