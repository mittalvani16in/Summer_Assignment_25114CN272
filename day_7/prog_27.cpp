#include<iostream>
using namespace std;
//recursive sum of digits
int sum(int n)
{
    if(n==0)
    return 0;
    return n%10 +sum(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sum(n);
    return 0;
}