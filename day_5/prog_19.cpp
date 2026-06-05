#include<iostream>
using namespace std;
int main()
{
    int num;
    //Input a number from the user
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The factors of "<<num<<" are: ";
    //Find the factors of the number
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}