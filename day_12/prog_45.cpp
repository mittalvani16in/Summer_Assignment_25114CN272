#include<iostream>
using namespace std;
//function for palindrome
void palindrome(int num)
{
    int n=num;
    int rev=0;
    while(num>0)
    {
        int d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(n==rev)
    cout<<n<<" is palindrome.";
    else
    cout<<n<<" is not palindrome.";
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    palindrome(num);
    return 0;
}