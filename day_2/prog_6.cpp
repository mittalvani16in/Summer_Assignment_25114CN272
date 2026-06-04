#include<iostream>
using namespace std;
int main()
{
    int num, rev=0;
    //To enter a number
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0)
    {
        //To reverse the number
        rev=rev*10+(num%10);
        num=num/10;
    }
    cout<<"The reversed number is:"<<rev;
    return 0;
}
