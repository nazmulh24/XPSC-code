class Solution
{
public:
    void getAllSubsets(vector<int> &nums, vector<int> &a, int i,
                       vector<vector<int>> &ans)
    {
        if (i == nums.size())
        {
            ans.push_back(a);
            return;
        }

        //--> include
        a.push_back(nums[i]);
        getAllSubsets(nums, a, i + 1, ans);

        a.pop_back();

        int idx = i + 1;
        while (idx < nums.size() and nums[idx] == nums[idx - 1])
            idx++;

        //--> exclude
        getAllSubsets(nums, a, idx, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> a;

        getAllSubsets(nums, a, 0, ans);

        return ans;
    }
};
