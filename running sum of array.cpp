#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];  // Update each index with the sum of previous elements
    }
    return nums;  // Return the modified array as the running sum
}

int main() {
    int n;
    cin >> n;  // Read number of elements

    vector<int> nums(n);
    
    // Read input values
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Compute running sum
    nums = runningSum(nums);

    // Print output
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
