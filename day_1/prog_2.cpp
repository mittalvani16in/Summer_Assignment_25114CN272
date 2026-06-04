#include<iostream>
using namespace std;
int main()
{
    int n;
    //Input a number from user
    cout<<"Enter a number:";
    cin>>n;
    //Print multiplication table of the given number
    cout<<"Multiplication table of "<<n<<" is:"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}