

//_Name--> Count Occurences of Anagrams
//_Link--> https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

class Solution
{
public:
    int search(string pat, string txt)
    {
        int m = pat.length();
        int n = txt.length();

        if (m > n)
            return 0;

        vector<int> cnt_Pat(26, 0);
        vector<int> cnt_Window(26, 0);

        for (char c : pat)
        {
            cnt_Pat[c - 'a']++;
        }

        for (int i = 0; i < m; ++i)
        {
            cnt_Window[txt[i] - 'a']++;
        }

        int result = 0;

        if (cnt_Window == cnt_Pat)
        {
            result++;
        }

        for (int i = m; i < n; ++i)
        {
            cnt_Window[txt[i] - 'a']++;

            cnt_Window[txt[i - m] - 'a']--;

            if (cnt_Window == cnt_Pat)
            {
                result++;
            }
        }

        return result;
    }
};
