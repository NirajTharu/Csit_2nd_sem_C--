//Fin File Handling 2080/05/05
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    char a[20];
    ifstream fin;
    fin.open("Hero.txt");
    fin>>a;
    cout<<"The Data From the file is:"<<a<<endl;
    fin.close();
    cout<<"Change in Your File is done Sucessfully";
    return 0;
}
