//Triangular pattern Using Function
#include<iostream>
using namespace std;
int patt();
int main()
{
    cout<<"\nThe Pattern is:\n";
    patt();
    return 0;
}
int patt()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}