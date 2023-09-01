//Program code For static Memory Allocation
#include<iostream>
using namespace std;
class student
{
    char name[25];
    int roll;
    static int cnt;
    public:
    void getdata()
    {
        cout<<"\nEnter the name and roll Number:";
        cin>>name>>roll;
        cnt ++;
    }
    void show()
    {
        cout<<"\nThe total count ="<<cnt;
    }
};
int student::cnt=0;
int main()
{
    student s1,s2,s3;
    s1.show();
    s2.show();
    s3.show();
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s1.show();
    s2.show();
    s3.show();
    return 0;
}