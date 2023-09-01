//Example of the Destructor
#include<iostream>
using namespace std;
class Example
{
    int a;
    public:
    
    Example()
    {
        a=0;
        cout<<"\nInside The Constructor:";
    }
    ~Example()
    {
        cout<<endl<<"x="<<a;
        cout<<"\nInside the distructor.";
    }
};
int main()
{
    Example e;
    cout<<"\nEvery Thing will be OK";
    return 0;
}