class Solution {
public:
    void solve(int start, vector<int>& candidates, int target,
               vector<int>& current, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            
            // Skip duplicate combinations
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            current.push_back(candidates[i]);

            // i + 1 because each number can be used only once
            solve(i + 1, candidates, target - candidates[i],
                  current, result);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        sort(candidates.begin(), candidates.end());

        solve(0, candidates, target, current, result);

        return result;
    }
};
