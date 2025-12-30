#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    char arr[n];
    char start = 0;
    char end = n - 1;

    // Array input
    cout << endl
         << "Array Input" << endl;
    for (char i = 0; i < n; i++)
    {
        cout << "Enter element of arr[" << i << "] :";
        cin >> arr[i];
    }

    // Original Array
    cout << endl
         << "Original Array" << endl;

    for (char i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // while loop for Array reverse
    while (start < end)
    {
        // Swap logic
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    
    
    // Array Output
    cout << endl << endl
         << "Array Output" << endl;

    for (char i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};