#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Elements:";
    cin >> n;

    int arr[n];
    cout << endl << "Enter Sorted Array Element" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "] :";
        cin >> arr[i];
    }

    int j = 1;

    //logic to remove Dublicate element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    cout << "Array after Removing Duplicate Element:";

    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}