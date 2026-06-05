#include<iostream>
using namespace std;
int main()
{
    int num,pf=1;
    //Input a number from the user
    cout<<"Enter a number: ";
    cin>>num;
    //Find the largest prime factor of the number
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            pf=i;
            num=num/i;
            i--;
        }
    }
    //Print the largest prime factor
    cout<<"The largest prime factor is: "<<pf;
    return 0;   
}