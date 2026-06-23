#include<iostream>
using namespace std;
//function to find sum of two numbers
void sum(int a,int b)
{
    int sum=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}