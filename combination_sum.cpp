class Solution {
public:

    vector<vector<int>> ans;
    void back(vector<int>& candidates, int target, vector<int> current_sol, int current_sum, int index)
    {
        if(index >= candidates.size() or current_sum > target)
        {
            return;
        }

        current_sum += candidates[index];
        current_sol.push_back(candidates[index]);

        if(current_sum == target)
        {
            ans.push_back(current_sol);
        }

        for(int i = index; i < candidates.size(); ++i)
        {
            back(candidates, target, current_sol, current_sum, i);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        for(int i = 0; i < candidates.size(); ++i)
        {
            back(candidates, target, {}, 0, i);
        }
        return ans;
    }
};
