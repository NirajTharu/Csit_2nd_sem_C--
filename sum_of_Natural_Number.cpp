#include <iostream>
using namespace std;
int sumFirstNNumbers (int n)
{
int sum = 0; // Space Complexity: 0(1)
for (int i = 1; i <= n; ++i) 
{
sum += i; // Time Complexity: (n)
}
return sum;
}
int main() 
{
int N;
cout << "Enter a positive integer N: "; 
cin >>N;
int res = sumFirstNNumbers(N);
cout << "Sum of the first " << N << " natural numbers: "<<res;
return 0;
}