//Friend Function Simple Example
#include<iostream>
using namespace std;
class ffsample
{
    int age,ph;
    char name[25],address[25];
    public:
    void getdata();
    friend void display(ffsample);
};
void ffsample::getdata()
{
    cout<<"Enter the name,address,age and phone Number:";
    cin>>name>>address>>age>>ph;
}
void display(ffsample f)
{
    cout<<"The Name is:"<<f.name;
    cout<<"\nAddress is:"<<f.address;
    cout<<"\nAge is:"<<f.age;
    cout<<"\nPhone Number is:"<<f.ph;
}
int main()
{
    ffsample f;
    f.getdata();
    cout<<"The inforamtion detail is:\n";display(f);
    return 0;
}