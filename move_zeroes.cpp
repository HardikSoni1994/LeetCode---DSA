#include <iostream>
#include <vector>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if ( nums[j] != 0){
                swap( nums[i], nums[j]);
                i++;
            };
        };
    };

int main() {
    int n;
    
    cout << "Enter the total number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    
    cout << "Enter the " << n << " elements (separated by space or Enter): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    moveZeroes(nums);
    
    // Output print karke check karte hain
    cout << "Output Array: [ ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}