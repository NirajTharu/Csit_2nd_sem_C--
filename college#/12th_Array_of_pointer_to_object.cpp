//Program to understand the concept of array of pointer to object
#include<iostream>
#include<string>
using namespace std;
class student
{
    protected:
    char *name;
    int len;
    public:
    student ()
    {
        len=0;
        name =new char[len+1];
    }
    void getname()
    {
        char *s;
        s=new char[25];
        cout<<"Enter the name of student:"<<endl;
        cin>>s;
        len =strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    student *ptr[10];
    int n=0;
    int ch;
    do
    {
        ptr[n]=new student;
        ptr[n]->getname();
        n++;
        cout<<"If You want to enter the another name Please Enter!!"<<endl;
        cout<<"(1 for YES and 0 for NO)"<<endl;
        cin>>ch;
    }
    while(ch);
    {
        cout<<"\n\n";
        for(int i=0;i<=n;i++)
        {
            ptr[i]-> display();
        }
        return 0;
    }

}