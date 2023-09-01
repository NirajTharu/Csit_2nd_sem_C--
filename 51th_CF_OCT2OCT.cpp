//Conversion From one class type to another class type
#include<iostream>
using namespace std;
class mc
{
    float meter,centi;
    public:
    mc()
    {}
    mc(float m, float c)
    {
        meter=m;
        centi=c;
    }
    void display()
    {
        cout<<meter<<"meters &"<<centi<<"Centimeters"<<endl;
    }
};
class fi
{
    float feet,inch;
    public:
    fi()
    {}
    fi(float f,float i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
        cout<<feet<<"feet & "<<inch<<"inches"<<"\n";
    }
    operator mc()
    {
        float m= feet/3.280;
        float c=inch/0.394;
        return mc(m,c);
    }
};
int main()
{
    mc m;
    fi f(10,6);
    m=f;
    cout<<"length in feet and inch is:";f.display();
    cout<<"length in meter and centimeter is:";m.display();
    return 0;
}