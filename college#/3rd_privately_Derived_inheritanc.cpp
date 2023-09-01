//Privately derived inheritence
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
class result:private student
{
    int total;
    public:
    void sum();
    void display();
};
int student::getm()
{
    cout<<"Enter the value for marks1 and mark2:\n";
    cin>>marks1>>marks2;
}
int student::getm()
{
    return marks1;
}
void student::displaym()
{
    cout<<"marks1="<<marks1<<endl;
}
void result::sum()
{
  getm();
  total=marks2+getm();
}
void result::display()
{
   displaym();
   cout<<"marks2="<<marks2<<endl;
   cout<<"Total="<<total<<endl;
}
int main()
{
    result r;
    //r.getmn();
    r.sum();
   //r.displaym();
    r.display();
   // r.marks2=20;
    r.sum();
    r.display();
    return 0;
}

