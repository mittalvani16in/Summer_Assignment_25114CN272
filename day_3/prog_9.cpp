#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    //Input a number
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1)
    {
        cout<<"Not a prime number";
    }
    else
    {
        for(int i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        //Display whether the number is prime or not
    if(count==1)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not a prime number";
    }
}
    return 0;
}
    

    