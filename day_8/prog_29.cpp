#include<iostream>
using namespace std;
int main()
{
    int i,j;
    //half pyramid pattern
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //inverted half pyramid pattern
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}