#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);
    vector<int> freq(size, -1); // -1 => not counted yet, 0 => counted (duplicate)

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Count frequencies
    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 0) // agar ye index pehle se duplicate mark ho chuka hai to skip
            continue;

        int count = 1; // khud ko ek baar count karo (first occurrence)
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                ++count;
                freq[j] = 0; // j ko mark karo taaki future me usko dobara na count karein
            }
        }
        freq[i] = count; // i par final count store kar do
    }

    // Print results (sirf wahi print karo jinka freq != 0)
    cout << endl
         << "Element | Frequency" << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
            cout << "   " << arr[i] << "     |     " << freq[i] << endl;
    }

    return 0;
}
