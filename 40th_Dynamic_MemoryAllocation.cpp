//Program for dynamic Memory Allocation
#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout<<"Enter how much number You want to store in the array:\n";
    cin>>size;
    ptr=new int[size];
    cout<<"Enter the value to be stored in the array:\n";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"Values in the array are:\n";
        for(int i=0;i<size;i++)
        {
            cout<<setw(5)<<ptr[i]<<endl;
        }
        return 0;
}