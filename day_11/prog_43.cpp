#include<iostream>
using namespace std;
//function to check prime number
void prime(int num)
{
    int c=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==0)
    cout<<num<<" is prime.";
    else
    cout<<num<<" is not prime.";
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    prime(num);
}