#include<iostream>
using namespace std;
//number pyramid
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}