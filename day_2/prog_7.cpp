#include<iostream>
using namespace std;
int main()
{
    int num, prod=1;
    //To enter a number
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0)
    {
        //To calculate the product of the digits
        prod=prod*(num%10);
        num=num/10;
    }
    //To display the product of the digits
    cout<<"The product of the digits is:"<<prod;
    return 0;
}