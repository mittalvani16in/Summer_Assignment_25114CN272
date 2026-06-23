#include<iostream>
using namespace std;
//recursive factorial
int fact(int n)
{
    if(n==1)
    return n;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is: ";
    cout<<fact(n);
    return 0;
}