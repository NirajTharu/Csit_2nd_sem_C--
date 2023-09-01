//5th Program concept of class and object
#include<iostream>
using namespace std;
class info
{
    private:
    int accno,phno,rollno;
    public:
    void setinfo(int a,int p,int r)
    {
        accno=a;
        phno=p;
        rollno=r;
    }
    void showinfo()
    {
        cout<<"\n"<<"Account Number is:\n"<<accno;
        cout<<"\n"<<"Phone Number is:\n"<<phno;
        cout<<"\n"<<"Roll Number is:\n"<<rollno;
    }
    void getinfo();
};
void info::getinfo()
{
    cout<<"\nEnter Your Account Number,Phone Number and Roll Number Respectively:\n";
    cin>>accno>>phno>>rollno;
}
int main()
{
    info i0,i1;
    i0.setinfo(20020011,212100,150);
    i0.showinfo();
    i1.getinfo();
    i1.showinfo();
    return 0;
}