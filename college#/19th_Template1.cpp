//Tmplate with Multiple Parameters
#include<iostream>
using namespace std;
template< class a, class b>
class A
{
    a Q;
    b U;
    public:
    A( a x,b y)
    {
        Q=x;
        U=y;
    }
    void display()
    {
        cout<<Q<<"      "<<"and"<<"    "<<U<<endl;
    }
};
int main()
{
    cout<<"The Different Types of Data are:"<<endl;
    A<int, float>a(55,66.88);
    A<char,int>b('u',88);
    a.display();
    b.display();
    return 0; 
}