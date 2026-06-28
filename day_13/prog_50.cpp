#include<iostream>
#include<vector>
using namespace std;
//To find the sum and average of an array
int main()
{
    int n,sum=0;
    double avg=0.0;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Input the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=(double)sum/n;
    cout<<"Sum of array is "<<sum<<endl;
    cout<<"Average of array is "<<avg<<endl;
}