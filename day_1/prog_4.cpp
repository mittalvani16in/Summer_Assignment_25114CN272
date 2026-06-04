#include<iostream>
using namespace std;
int main()
{
    int num;
    //Input a number from user
    cout<<"Enter a number:";
    cin>>num;
    //To count the number of digits in a number
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    //Display the result
    cout<<"Number of digits in the given number is:"<<count<<endl;
    return 0;
}
  
    