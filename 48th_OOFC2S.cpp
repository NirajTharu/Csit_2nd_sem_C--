//Operator Overloading using two strings
#include<iostream>
#include<string>
using namespace std;
class string
{
    char *p;
    int len;
    public:
    void getdata()
    {
        char str[15];
        cout<<"Enter any String(word) for adding:"<<"\n";
        cin>>str;
        len=strlen(str);
        p=new char[len+1];
        strcpy(p,str);
    }
    void display()
    {
        cout<<p<<"\n";
    }
    string operator +(string x)
    {
        string a;
        a.p=new char[len+x.len+1];
        strcpy(a.p,x.p);
        strcat(a.p,x.p);
        return a;
    }
};
int main()
{
    string s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    cout<<"s1=";s1.display();
    cout<<"s2=";s2.display();
    cout<<"s3=";s3.display();
    return 0;
}