#include<iostream>
using namespace std;
int main()
{
    int num,n=0,c=0,sum=0;
    //Enter a number and check if it is armstrong or not
    cout<<"Enter a number:";
    cin>>num;
    n=num;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    num=n;
    while(num>0)
    {
        int d=num%10;
        sum=sum+pow(d,c);
        num=num/10;
    }
    //Check if the number is armstrong or not
    if(sum==n)
    {
        cout<<n<<" is an armstrong number.";
    }
    else
    {
        cout<<n<<" is not an armstrong number.";
    }
    return 0;

}