#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    //Take a number as input from the user
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    //Check if the sum of the proper positive divisors is equal to the original number
    if(sum==num)
    {
        //If they are equal, the number is a perfect number
        cout<<num<<" is a perfect number.";
    }
    else
    {
        cout<<num<<" is not a perfect number.";
    }
    return 0;
}