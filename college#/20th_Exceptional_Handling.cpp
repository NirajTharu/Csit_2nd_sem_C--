//Exceptional Handaling     

#include<iostream>
using namespace std;
template<class t>
t large( t a, t b)
{
    t ans;
    ans=(a>b)?a:b;
    return(ans);
}
int main()
{
    int p,q;
    char e,f;
    float c,d;
    cout<<"Enter two integers:"<<endl;
    cin>>p>>q;
    cout<<"Enter two characters:"<<endl;
    cin>>e>>f;
    cout<<"Enter two floats:"<<endl;
    cin>>c>>d;
    cout<<"The greater integer is:"<<large(p,q)<<endl;
    cout<<"The greater character is:"<<large(e,f)<<endl;
    cout<<"The greater float is:"<<large(c,d)<<endl;
    return 0;
}