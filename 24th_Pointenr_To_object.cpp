//Pointer to object
/*Pointer to object in c++ is defined as the pointer that is used for accessing objects.
=>A pointer is a variable that stores the memory address of another variable.
=>The types of the pointer are Null pointer, Void pointer, Wild pointer, and Dangling pointer.
*/
#include<iostream>
using namespace std;
class info
{
    char name[25],address[24];
    int roll,ph;
    public:
    void getinfo();
    void display();
};
void info::getinfo()
{
    cout<<"Enter the Name,address,roll and phone number:\n";
    cin>>name>>address>>roll>>ph;
}
void info::display()
{
    cout<<"Name:"<<name;
    cout<<"\nAddress:"<<address;
    cout<<"\nRoll:"<<roll;
    cout<<"\nPhone:"<<ph;
}
int main()
{
    info *ip;
    ip=new info;//memory allocation operator new
    ip->getinfo();
    ip->display();
    return 0;
}