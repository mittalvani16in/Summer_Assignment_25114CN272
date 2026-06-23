#include<iostream>
using namespace std;
//reverse star pyramid
void print(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++)
        {
          cout<<"*";
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
