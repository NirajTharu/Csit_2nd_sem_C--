//Finding Total and average marks using constructor
#include<iostream>
using namespace std;
class score
{
    int m1,m2,m3,m4,m5;
    float sum,avg;
    public:
    score(int a,int b, int c,int d,int e);
    void result();
};
score::score(int a,int b, int c,int d,int e)
{
    m1=a;m2=b;m3=c;m4=d;m5=e;
}
void score::result()
{
    cout<<"The Marks are:"<<endl<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5 <<"\n";
    sum=float(m1+m2+m3+m4+m5); 
    avg=float(sum/5);
    cout<<"Total mark is :"<<sum<<"\n";
    cout<<"Average mark is:"<<avg<<"\n";
}
int main()
{
    int m1,m2,m3,m4,m5;
    cout<<"Enter the marks:\n";
    cin>>m1>>m2>>m3>>m4>>m5;
    score s1(m1,m2,m3,m4,m5);
    score s2(35, 45, 55, 65, 75);
    s1.result();
    s2.result();
    return 0;
}