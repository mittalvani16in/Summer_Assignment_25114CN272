#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    //Input a number from user
    cout<<"Enter a number:";
    cin>>n;
    //Calculate the sum of first n natural numbers
    sum=(n*(n+1))/2;
    //Display the result
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;

}