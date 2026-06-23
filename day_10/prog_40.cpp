#include<iostream>
using namespace std;
//character pyramid
void print(char n)
{
    for(char i='A';i<=n;i++)
    {
        for(char j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(char j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(char j=i;j>'A';j--)
        {
            cout<<char(j-1)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    char n;
    cin>>n;
    print(n);
    return 0;
}