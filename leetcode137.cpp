#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(vector<int>& weight,
             vector<int>& value,
             int capacity) {

    int n = weight.size();

    vector<vector<int>> dp(
        n + 1,
        vector<int>(capacity + 1, 0)
    );

    for (int i = 1; i <= n; i++) {

        for (int w = 1; w <= capacity; w++) {

            if (weight[i - 1] <= w) {

                dp[i][w] = max(
                    value[i - 1] +
                    dp[i - 1][w - weight[i - 1]],

                    dp[i - 1][w]
                );
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {

    vector<int> weight = {1, 3, 4, 5};
    vector<int> value  = {1, 4, 5, 7};

    int capacity = 7;

    cout << "Maximum Value = "
         << knapsack(weight, value, capacity);

    return 0;
}
