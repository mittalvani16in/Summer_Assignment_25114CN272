#include<iostream>
using namespace std;
int main()
{
    int a,b;
    //Input two numbers and find their GCD using Euclidean algorithm
    cout<<"Enter two numbers:";
    cin>>a>>b;
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    //Display the GCD
    cout<<"GCD is:"<<a;
    return 0;
}