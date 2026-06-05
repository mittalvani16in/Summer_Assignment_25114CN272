#include<iostream>
using namespace std;
int main()
{
    int d,num,fac=1,sum=0,N;
    //Input a number from user and check whether it is a strong number or not.
    cout<<"Enter a number: ";
    cin>>num;
    N=num;
    while(num!=0)
    {
        d=num%10;
        fac=1;
        for(int i=1;i<=d;i++)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        num=num/10;
    }
    //Check whether the sum of factorial of digits is equal to the original number or not.
    if(N==sum)
    {
        cout<<N<<" is a strong number.";
    }
    else
    {
        cout<<N<<" is not a strong number.";
    }
    return 0;
}


