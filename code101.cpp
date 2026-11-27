#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(count == 0) {
            candidate = nums[i];
        }

        if(candidate == nums[i]) {
            count++;
        }
        else {
            count--;
        }
    }

    return candidate;
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

    cout << "Majority Element: " << majorityElement(nums);

    return 0;
}
