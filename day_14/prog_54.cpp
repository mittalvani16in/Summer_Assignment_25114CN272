#include<iostream>
#include<vector>
using namespace std;
//To find frequency of an element
int main()
{
    int n,key,f=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element: ";
    cin>>key;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)

    {
        cin>>arr[i];
        if(arr[i]==key)
        f++;
    }
    cout<<"The frequency of element "<<key<<" is "<<f<<endl;
    return 0;
}