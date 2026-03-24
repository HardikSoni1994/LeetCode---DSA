#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> & nums, int target) {
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); i++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    int n;
    cout << "Enter size of Array :";
    cin >> n;

    vector<int> nums(n);
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of Element of Array:";
        cin >> nums[i];
    }

    int target;
    cout << "Enter the value of target:";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (result.empty())
    {
        cout << "No result found..";
    }
    else
    {
        cout << "Answer: [" << result[0] << ", " << result[1] << "]" << endl;
    }
    return 0;
}

