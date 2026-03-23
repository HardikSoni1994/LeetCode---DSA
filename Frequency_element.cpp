#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "] :";
        cin >> arr[i];
    }

    cout << "The frequency of elements in the array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1; // Mark as counted
                }
            }
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}