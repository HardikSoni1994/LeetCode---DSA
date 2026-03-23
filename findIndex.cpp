#include <iostream>
using namespace std;

int main()
{
    int n, target;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element of arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Enter target value : ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
        }
    }
    if (index < 0)
    {
        cout << endl
             << "target is not found" << endl;
    }
    else
    {
        cout << endl
             << "target found at index : " << index << endl;
    }
    return 0;
}
