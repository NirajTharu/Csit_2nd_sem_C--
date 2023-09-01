//Basic type to class type conversion example
#include<iostream>
using namespace std;
class time
{
    private:
    int year;
    int month;
    public:
    time(int y,int m)
    {
        year=y;
        month=m;
    }
    time(float a)
    {
        year=int(a);
        month=12*(a-year);
    }
    void display()
    {
        cout<<"Years:"<<year<<"\n";
        cout<<"Months:"<<month;
    }
};
int main()
{   
    time t;
    float y;
    cout<<"Enter the year";
    cin>>y;
    time t=y;
    t.display();
    return 0;
}