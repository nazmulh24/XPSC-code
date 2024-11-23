

//__Name --> Longest Substring with K Uniques
//__Link --> https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.size();

        int l = 0, r = 0, ans = -1;

        map<char, int> cnt;

        while (r < n)
        {
            cnt[s[r]]++;

            if (cnt.size() == k)
                ans = max(ans, r - l + 1);
            else
            {
                while (cnt.size() > k)
                {
                    cnt[s[l]]--;

                    if (cnt[s[l]] == 0)
                        cnt.erase(s[l]);

                    l++;
                }
            }

            r++;
        }

        return ans;
    }
};
