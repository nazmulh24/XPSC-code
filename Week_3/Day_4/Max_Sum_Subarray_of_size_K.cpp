

//__Name --> Max Sum Subarray of size K
//__Link --> https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        int n = arr.size();

        int mx = INT_MIN;
        int l = 0, r = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[r];

            if (r - l + 1 == k)
            {
                mx = max(mx, sum);
                sum -= arr[l];
                l++;
                r++;
            }
            else
                r++;
        }

        return mx;
    }
};
