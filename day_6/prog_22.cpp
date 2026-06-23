#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long num;
    int deci=0,i=0,rem;
    cout<<"Enter a binary number: ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        deci+=rem*pow(2,i);
        num=num/10;
        i++;
    }
    cout<<"Decimal equivalent is "<<deci;
    return 0;
}