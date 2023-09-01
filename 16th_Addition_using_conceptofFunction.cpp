//Additon of two integers using concept of function
#include<iostream>
using namespace std;
int add(int a,int b); //Function Decleration
int main()
{
    int x,y;
    cout<<"Enter any two numbers:";
    cin>>x>>y;
    cout<<"The sum is:"<<add(x,y);//Function Call
}
int add(int a,int b)//Function Defination
{
    return(a+b);
}