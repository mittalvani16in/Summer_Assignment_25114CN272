#include<iostream>
#include<vector>
using namespace std;
//To count even and odd elements in array
int main()
{
    int n,co=0,ce=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Input the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        ce++;
        else 
        co++;
    }
    cout<<"Even elements= "<<ce<<endl;
    cout<<"Odd elements= "<<co<<endl;
    return 0;
}
    