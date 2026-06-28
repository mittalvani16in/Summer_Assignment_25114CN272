#include <iostream>
#include <vector>
using namespace std;
//To input and display array
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Input the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}