#include <iostream>
#include<vector>
using namespace std;
//Reverse the array
int main() 
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1,temp=0;
    while (start < end) 
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}