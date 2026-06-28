#include <iostream>
#include <vector>
using namespace std;
//Rotate array left by k places
int main() {
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the number of left rotations: ";
    cin >> k;
    k = k % n; 
    vector<int> result(n);
    for (int i = 0; i < n - k; i++) 
    {
        result[i] = arr[k + i];
    }
    for (int i = 0; i < k; i++)  
    {
        result[n - k + i] = arr[i];
    }
    cout << "Array after left rotation: ";
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}