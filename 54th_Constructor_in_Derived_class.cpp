/*Q.Define shape class (with necessary constructor and member functions) in object oriented programming(abstract necessary
attributes and their types).Write a complete code in C++ programming language
2068B.S.
. Derived triangle and rectangle classes from shape class adding necessary attributes
. Use these classes in a main function and display the area of the tirangle and rectangale
*/

#include<iostream>
using namespace std;
class shape
{   
    protected:
    float base, breadth;
    public:
//     shape()
//    {
//     base=0;
//     breadth =0;
//    }
   shape(float a)
   {
    base=a;
    breadth=a;
   }
};
class tri:public shape
{ 
    protected:
    int height,areat;
    public:
    // tri()
    // {
    //      height=0;  
    // }
    tri(float a,float h):shape(a)
    {
        height=h;
    }
    void area()
    {
    areat=(base*height)/2;
    }
    void display()
    {
        cout<<"The area of the tirangle is:"<<areat<<endl;
    }
};
class rect:public shape
{
    float length,arear;
    public:
    // rect()
    // {
    //      length=0;  
    // }
    rect(float a,float l):shape(a)
    {
        length=l;
    }
    void area()
    {
    arear=(length*breadth);
    }
    void display()
    {
        cout<<"The area of the tirangle is:"<<arear<<endl;
    }
    
};
int main()
{
//  tri t;
//  rect r;
 tri t1(22,3);
 t1.area();
 t1.display();
 rect r1(8.2,4);
 r1.area();
 r1.display();
 return 0;
}