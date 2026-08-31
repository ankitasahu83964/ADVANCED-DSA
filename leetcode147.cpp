class Solution {
public:
    bool isPalindrome(string s) {
        string t;

        // Keep only alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }

        // Check palindrome
        int left = 0;
        int right = t.length() - 1;

        while (left < right) {
            if (t[left] != t[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
