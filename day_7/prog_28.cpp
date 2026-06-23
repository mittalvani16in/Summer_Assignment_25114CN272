#include<iostream>
using namespace std;
//recursive reverse number
void reverse(int n)
{
    if(n==0)
    return;
    cout<<n%10;
    reverse(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Reverse of is ";
    reverse(n);
    return 0;
}