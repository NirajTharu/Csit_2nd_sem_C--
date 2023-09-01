// Swapping of two different Data
#include<iostream>
using namespace std;
template <class t>
void H(t &a,t &b)
{ 
    t temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int m, int n, float o, float p, char g, char h)
{
    cout<<"Before Swapping:"<<m<<"      "<<n<<endl;
    H(m,n);
    cout<<"After Swapping:"<<m<<"       "<<n<<endl;
    cout<<"Before Swapping:"<<o<<"      "<<p<<endl;
    H(o,p);
    cout<<"After Swapping:"<<o<<"       "<<p<<endl;
    cout<<"Before Swapping:"<<g<<"      "<<h<<endl;
    H(g,h);
    cout<<"After Swapping:"<<g<<"       "<<h<<endl;
}
int main()
{
    int m,n;
    float o,p;
    char g,h;
    cout<<"Enter any two intigers:";
    cin>>m>>n;
    cout<<"Enter any two Floats:";
    cin>>o>>p;
    cout<<"Enter any two character:";
    cin>>g>>h;
    display(m,n,o,p,g,h);
    return 0;
}