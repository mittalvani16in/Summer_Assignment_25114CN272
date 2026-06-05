#include<iostream>
using namespace std;
int main()
{
    int N,count=0;
    //Input a range
    cout<<"Enter the range:";
    cin>>N;
    if(N<=1)
    {
        cout<<"No prime numbers";
    }
    else
    {
    for(int i=2;i<=N;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        //Display prime numbers in the given range
        if(count==1)
        {
            cout<<i<<" ";
        }
        count=0;
    }
}
return 0;
}