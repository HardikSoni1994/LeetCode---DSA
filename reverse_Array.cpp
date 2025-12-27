// int array = [ 89, 12, 74, 63, 78, 99 ];  reverse this array in 1D

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of element : ";
    cin >> n;

    int arr[n];
    int left = 0;
    int right = n - 1;

    // array input
    cout << endl
         << "array Input" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element of arr[" << i << "] :";
        cin >> arr[i];
    }

    // while loop for array reverse
    while (left < right)
    {
        // swap logic
        int temp;
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Array Output
    cout << endl
         << "Array Output" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}