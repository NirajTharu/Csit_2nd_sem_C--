//Greeting Using Function
#include<iostream>
using namespace std;
void line();
int main()
{
    line();
    cout<<"\nHellow World\n";
    line();
    return 0;
}
void line()
{
    for(int i=0;i<=11;i++)
    {
        cout<<"-";
    }
}