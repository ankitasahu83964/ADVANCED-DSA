
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int total = 0;

    for(int i = 0; i < n; i++) {
        total += nums[i];
    }

    return sum - total;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing Number: " << missingNumber(nums);

    return 0;
}
