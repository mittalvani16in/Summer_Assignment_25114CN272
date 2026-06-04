#include<iostream>
using namespace std;
int main()
{
    int num;
    //Input a number from user
    cout<<"Enter a number:";
    cin>>num;
    //To find the factorial of the given number
    long long fac=1;
    if(num<=0)
    {
        cout<<"Factorial does not exist"<<endl;
        return 0;
    }
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    //Display the result
    cout<<"Factorial of "<<num<<" is:"<<fac<<endl;
    return 0;
}

