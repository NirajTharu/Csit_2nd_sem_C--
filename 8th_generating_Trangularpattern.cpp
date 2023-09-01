//Generating Triangular pattern
#include<iostream>
using namespace std;
class pattern
{
    public:
    void patt()
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
    }
    void patt2();
};
void pattern::patt2()
{
    int k,l;
    for(k=1;k<=5;k++)
    {
        for(l=1;l<=k;l++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
int main()
{
    pattern p1,p2;
    p1.patt();
    p2.patt2();
    return 0;
}