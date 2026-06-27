#include<iostream>
using namespace std;
//function for armstrong number
void armstrong(int num)
{
    int sum=0,c=0;
    int n=num;
    while(num>0)
    {
        num/=10;
        c++;
    }
    num=n;
    while(num>0)
    {
        int d=num%10;
        sum+=pow(d,c);
        num/=10;
    }
    if(sum==n)
    cout<<n<<" is armstrong.";
    else
    cout<<n<<" is not armstrong.";
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    armstrong(num);
    return 0;
}
