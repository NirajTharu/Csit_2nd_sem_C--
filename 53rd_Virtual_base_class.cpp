//Implimentation of virtual base class
#include<iostream>
using namespace std;
class student 
{
    protected:
    int roll; 
    public:
    void setroll(int a)
    {
        roll = a;
    }
    void putroll()
    {
        cout<<"Roll Number of the student is:"<<roll<<endl;
    }
};
class sport:public virtual student
{
    protected:
    float score;
    public:
    void setscore(float s)
    {
        score =s;
    }
    void putscore()
    {
        cout<<"Score You obtained in sport is:"<<score<<endl;
    }
};
class test:public virtual student
{
    protected:
    float p,p1;
    public:
    void setmark(float m,float m1)
    {
        p=m;
        p1=m1;
    }
    void putmark()
    {
        cout<<"Marks obtained in 1st test is:"<<p<<endl;
        cout<<"Marks obtained in 2nd test is:"<<p1<<endl;
    }
};
class result: public sport, public test
{
    float total;
    public:
    void display();
};
void result::display()
{
    total=p+p1+score;
    putroll();
    putmark();
    putscore();
    cout<<"Total score:"<<total<<endl;
}
int main()
{
    result r;
    r.setroll(22);
    r.setmark(99,99);
    r.setscore(49);
    r.display();
    return 0;
}