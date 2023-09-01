//Concept of Array of object
#include<iostream>
using namespace std;
class student
{
    char name[24],add[14];
    int roll;
    public:
    void getdata();
    void showdata();
};
void student::getdata()
{
    cout<<"Enter the name,address,roll of student:";
    cin>>name>>add>>roll;
}
void student::showdata()
{
    cout<<"Name:"<<name;
    cout<<"\nAddress:"<<add;
    cout<<"\nRoll Number:"<<roll;
}
const int MAX=3;
int main()
{
    student pri[MAX];
    for (int i=0;i<MAX;i++)
    {
        cout<<"\nPrimary level student"<<i+1<<"\n";
        pri[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<MAX;i++)
    {
        cout<<"\n primary level student"<<i+1<<"\n";
        pri[i].showdata();
    }
    return 0;
}