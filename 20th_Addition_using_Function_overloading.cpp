//Additinon Using the concept of Function Overloading
#include<iostream>
#include<iomanip>
using namespace std;
int add(int a);
int add(int b,int c);
float add(float d,float e,float f);
float add(float g,float h,float i,float j);
int main()
{
    int a,b,c;
    float d,e,f,g,h,i,j;
    cout<<"The different sums are:\n";
    cout<<"This is the sum of same intiger number:"<<add(2)<<"\n";
    cout<<"This is the sum of two intigers:"<<add(2,3)<<"\n";
    cout<<"This is the sum of three float numbers:"<<add(2.9, 3.2, 4.3)<<"\n";
    cout<<"This is the sum of four float numbers:"<<add(2.5, 3.2, 4.3, 5.4)<<"\n";
    return 0;
}
 int add(int a)
{
    return(a+a);
}
int add(int b,int c)
{
    return(b+c);
}
float add(float d,float e,float f)
{
    return float(d+e+f);
}
float add(float g,float h,float i,float j)
{
    return float(g+h+i+j);
}
