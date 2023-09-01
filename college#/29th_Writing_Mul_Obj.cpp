//Code for Writing the multiple Objects
#include<iostream>
#include<fstream>
using namespace std;
class Doctor
{
    char Dname[25],Daddress[25];
    int Dcode;
    public:
    void getdata()
    {
        cout<<"Enter the Doctor name,Doctor Address and Doctor code:"<<endl;
        cin>>Dname>>Daddress>>Dcode;
    }
};
int main()
{
    Doctor D;
    int i;
    ofstream fout;
    fout.open("Doctor.dat");
    for(i=0;i<=2;i++)
    {
        D.getdata();
        fout.write((char *)&D,sizeof(Doctor));
    }
    fout.close();
    cout<<"Write Operation is Done.";
    return 0;
}