//Class type to basic type example
#include<iostream>
using namespace std;
class time
{
    private:
    int year,month;
    public:
    time(int y,int m)
    {
        year=y;
        month=m;
    }
    operator float()
    {
        float x=year+month/12.0;
        return x;
    }
};
int main()
{
    int c,d;
    cout<<"Enter years and months:"<<endl;
    cin>>c>>d;
    time t(c,d);
    float y=(float)t;
    cout<<"Year is:"<<y;
    return 0;
}