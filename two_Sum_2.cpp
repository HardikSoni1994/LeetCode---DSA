#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    
    while (left < right) {
        int sum = numbers[left] + numbers[right];
        
        if (sum == target) {
            return {left + 1, right + 1}; 
        } else if (sum > target) {
            right--; 
        } else {
            left++; 
        }
    }
    return {-1, -1}; 
}

int main() {
    int n, target;
    
    // 1. Get the size of the array
    cout << "Enter the total number of elements: ";
    cin >> n;
    
    // 2. Create the vector and get the sorted elements
    vector<int> numbers(n);
    cout << "Enter the " << n << " sorted elements (separated by space): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // 3. Get the target number
    cout << "Enter the target number: ";
    cin >> target;
    
    vector<int> result = twoSum(numbers, target);
    
    // 5. Print the output
    cout << "\nOutput Indices (1-indexed): [ " << result[0] << ", " << result[1] << " ]" << endl;

    return 0;
}