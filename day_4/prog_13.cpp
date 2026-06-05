#include<iostream>
using namespace std;
int main()
{
    //Print the fibonacci series
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    while(true)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}