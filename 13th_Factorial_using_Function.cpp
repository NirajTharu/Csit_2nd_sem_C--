//Finding the factorial of positive number using the concepept of Function
#include<iostream>
using namespace std;
int facto(int);
int main()
{
    int n;
    cout<<"Enter the number for factorial:";
    cin>>n;
    cout<<"The factorial of "<<n<<" is = "<<facto(n);
    return 0;
}
int facto(int n)
{
    int i=1,fact=1;
    do
    {
        fact=fact*i;
        i=i+1;
    }
    while(i<=n);
    return fact;

}