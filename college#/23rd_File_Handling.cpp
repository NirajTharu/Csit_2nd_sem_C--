//File Handling  2080/05/04
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Hero.txt");
    fout<<"My First program about File handling. The Fist thing about file Handling is It is the basic program of c++ program. "<<endl;fout<<"Date 2080/05/04"<<endl;
    fout.close();
    cout<<"Your File is successfully Built";
    return 0;
}