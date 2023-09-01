//Inline Function concept(Square of any number)
#include<iostream>
using namespace std;
inline int square(int a)
{
    return (a*a);
}
int main()
{
    int a;
    cout<<"Enter any number:";
    cin>>a;
    cout<<"The Square of"<< a <<"is:"<< square(a);
    return 0;
}