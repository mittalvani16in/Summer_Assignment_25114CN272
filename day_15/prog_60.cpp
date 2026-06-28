#include <iostream>
#include <vector>
using namespace std;
//Moving zeroes to the end
int main() 
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int index = 0;
    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            arr[index++] = arr[i];
        }
    }
    // Fill the remaining positions with zeroes
    while (index < n) 
    {
        arr[index++] = 0;
    }
    cout << "Array after moving zeroes to the end: ";
    for (int i=0;i<n;i++) 
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}