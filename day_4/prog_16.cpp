#include<iostream>
using namespace std;
int main()
{
    //Print armstrong numbers in a range
    int low,high;
    cout<<"Enter the lower limit:";
    cin>>low;
    cout<<"Enter the upper limit:";
    cin>>high;
    for(int i=low;i<=high;i++)
    {
        int num=i,n=0,c=0,sum=0;
        n=num;
        while(num>0)
        {
            num=num/10;
            c++;
        }
        num=n;
        while(num>0)
        {
            int d=num%10;
            sum=sum+pow(d,c);
            num=num/10;
        }
        //Check if the number is armstrong or not
        if(sum==n)
        {
            cout<<n<<" ";
        }
    }
    return 0;
}