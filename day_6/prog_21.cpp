#include<iostream>
using namespace std;
//decimal to binary
int main()
{
    int num,new_num=0,i=0;
    cin>>num;
    while(num>0)
    {
        int d=num%2;
        num=num/2;
        new_num=d*pow(10,i)+ new_num;
        i+=1;
    }
    cout<<"Binary equivalent is "<<new_num;
    return 0;
}