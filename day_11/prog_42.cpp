#include<iostream>
#include<math.h>
using namespace std;
//function to find maximum 
void maxx(int a,int b)
{
    int maximum= max(a,b);
    cout<<"The maximum number is "<<maximum;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    maxx(a,b);
    return 0;
}