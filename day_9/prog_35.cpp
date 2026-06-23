#include<iostream>
using namespace std;
int main()
{
    char i,j;
    //repeated character pattern
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}