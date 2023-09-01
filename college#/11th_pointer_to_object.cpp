//Program to understand the concept of pointer to object
#include<iostream>
using namespace std;
class book
{
   
    int bcode;
    float bprice;
    public:
    void setdata(int a,float b)
{
   bcode = a;
   bprice = b;
}
void show(void)
{
    cout<<"The price and code of the book is:"<<bprice<<bcode<<endl;
}
};

const int size=3;
int main()
{
    book *b= new book[size];
    book *d=b;
    int x, i;
    float y;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the price and code of the book"<<i+1;
        cin>>x>>y;
        b->setdata(x,y);
        b++;
    }
    for(int i=0;i<size;i++)
    {
        cout<"Book:"<<i+1<<"\n";
        d->show();
        d++;
    }
    return 0;
}