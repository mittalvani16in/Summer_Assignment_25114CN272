#include<iostream>
using namespace std;
int main()
{
    char i,j;
    //character triangle pattern
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
        