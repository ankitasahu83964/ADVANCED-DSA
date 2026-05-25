#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int asteroid : asteroids) {

            bool destroyed = false;

            // Collision condition
            while (!st.empty() && asteroid < 0 && st.top() > 0) {

                // Top asteroid smaller
                if (st.top() < -asteroid) {
                    st.pop();
                }

                // Both equal
                else if (st.top() == -asteroid) {
                    st.pop();
                    destroyed = true;
                    break;
                }

                // Current asteroid smaller
                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(asteroid);
            }
        }

        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};

int main() {

    vector<int> asteroids = {5, 10, -5};

    Solution obj;

    vector<int> result = obj.asteroidCollision(asteroids);

    cout << "Remaining Asteroids: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}