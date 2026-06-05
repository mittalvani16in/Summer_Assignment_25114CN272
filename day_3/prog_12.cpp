#include<iostream>
using namespace std;
int main()
{
  int a,b;
    //Input two numbers 
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int num1=a,num2=b;
    //Finding LCD using GCD
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }  
    int lcd=(num1*num2)/a;
    //Display LCD
    cout<<"LCD is:"<<lcd;
    return 0;
}