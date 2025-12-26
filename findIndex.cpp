#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout <<"Enter number of elements in the array: ";
    cin >> n;

    int nums[100];
    cout << "Enter target value : ";
    cin >> target;

    // Input array elements
    for (int i = 0; i < n; i++) {
        cout << "Enter element of nums[" << i << "]: ";
        cin >> nums[i];
    }

    // Find two index such that their values add up to target
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[j] == target - nums[i]) {
                cout << "Index of two numbers that add up to " << target << " are: [" << i << ", " << j << "]" << endl;
                return 0;
            }
        }
    }
}
