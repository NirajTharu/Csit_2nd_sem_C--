//Example of class having constructor
#include<iostream>
using namespace std;
class integer
{
    int i;
    public:
    void getdata()
    {
        cout<<"\nEnter any integer Value:";
        cin>>i;
    }
    void setdata(int j)
        {
            i=j;
        }
        integer()
        {
            i=0;
        }
        integer(int j)
        {
            i=j;
        }
    
        void display()
        {
            cout<<"\nValue of i="<<i;
        }
};
int main()
{
    integer i,i1(10),i2,i3,i5;
    i.display();
    i1.display();
    i2.setdata(20);
    i2.display();
    i3.getdata();
    i3.display();
    i5.display();
    return 0;
}