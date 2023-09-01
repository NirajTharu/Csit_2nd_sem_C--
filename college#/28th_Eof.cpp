//End of file  2080/05/06
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char a;
    ifstream fin;
    fin.open("Apple.txt");
   cout<<"The Data From the file is:"<<endl; 
    while(!fin.eof())
    {
        fin.get(a);
        cout<<a;
    }
    
    fin.close();
    return 0;
}