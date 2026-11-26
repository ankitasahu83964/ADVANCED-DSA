#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Single Number: " << singleNumber(nums);

    return 0;
}
