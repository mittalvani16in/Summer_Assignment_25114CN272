#include<iostream>
#include<vector>
using namespace std;
//To find largest and smallest element in array
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Input the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    cout<<"The largest element is "<<max<<endl;
    cout<<"The smallest element is "<<min<<endl;
    return 0;
}