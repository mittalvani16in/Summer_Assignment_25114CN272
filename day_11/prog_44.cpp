#include<iostream>
using namespace std;
//function to find factorial
void fact(int num)
{
    long long fac=1;
    for(int i=1;i<=num;i++)
    {
    fac*=i;
    }
    cout<<"The factorial of "<<num<<" is "<<fac;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    fact(num);
    return 0;
}