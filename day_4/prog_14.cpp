#include<iostream>
using namespace std;
int main()
{
    int N;
    //Enter the term number and print the nth term of the fibonacci series
    cout<<"Enter the term nummber:";
    cin>>N;
    int a=0,b=1,c;
    if(N==0)
    {
        cout<<0;
    }
    else if(N==1)
    {
        cout<<1;
    }
    else
    {
        for(int i=3;i<=N;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        //Print the nth term of the fibonacci series
        cout<<c;
    }
    return 0;
}