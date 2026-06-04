#include<iostream>
using namespace std;
int main()
{
    int num, rev=0,n=0;
    //To enter a number
    cout<<"Enter a number:";
    cin>>num;
    n=num;
    while(num!=0)
    {
        rev=rev*10+(num%10);
        num=num/10;
    }
    //To check whether the number is palindrome or not
    if(n==rev)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"The number is not palindrome";
    }
    return 0;
}

        