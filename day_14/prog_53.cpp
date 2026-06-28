#include<iostream>
#include<vector>
using namespace std;
//Linear search
int main()
{
    int n,key,pos=-1;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    vector<int>arr(n);
    cout<<"Input the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    cout<<"Element not found.";
    else
    cout<<"Element "<<key<<" found at position "<<pos<<endl;
    return 0;
}