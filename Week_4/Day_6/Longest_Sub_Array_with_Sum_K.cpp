

//__Name --> Longest Sub-Array with Sum K
//__Link --> https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        int n = arr.size();

        unordered_map<int, int> pSumM;

        int r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += arr[r];

            if (sum == k)
                ans = r + 1;

            if (pSumM.find(sum - k) != pSumM.end())
                ans = max(ans, r - pSumM[sum - k]);

            if (pSumM.find(sum) == pSumM.end())
                pSumM[sum] = r;

            r++;
        }

        return ans;
    }
};
