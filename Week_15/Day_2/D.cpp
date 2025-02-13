class Solution
{
public:
    set<vector<int>> s;

    void getAllCombo(vector<int> &arr, int i, int tar, vector<int> &a,
                     vector<vector<int>> &ans)
    {

        if (i == arr.size() or tar < 0)
        {
            return;
        }

        if (tar == 0)
        {
            if (s.find(a) == s.end())
            {
                ans.push_back(a);
                s.insert(a);
            }

            return;
        }

        a.push_back(arr[i]);

        //--> Single
        getAllCombo(arr, i + 1, tar - arr[i], a, ans);
        //--> Multiple
        getAllCombo(arr, i, tar - arr[i], a, ans);

        a.pop_back();

        //--> Exclusion
        getAllCombo(arr, i + 1, tar, a, ans);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> a;

        getAllCombo(candidates, 0, target, a, ans);

        return ans;
    }
};
