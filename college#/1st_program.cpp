//Type casting
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
        cout<<"Years"<<year<<"\n";
        cout<<"Months"<<month<<"\n";   
    }
};
int main()
{
    float y;
    cout<<"Enter the Year:";
    cin>>y;
    time t=y;
    t.display();
    return 0;
}