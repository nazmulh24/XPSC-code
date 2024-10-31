/***********************************************************************

Name --> B. YetnotherrokenKeoard
Link --> https://codeforces.com/problemset/problem/1907/B

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

void solve()
{
    string s;
    cin >> s;

    stack<pair<int, char>> UP, LO;

    rep(i, 0, s.size())
    {
        if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
        {
            UP.push({i, s[i]});
        }
        else if (s[i] >= 'A' && s[i] <= 'Z' && s[i] == 'B')
        {
            if (!UP.empty())
            {
                UP.pop();
            }
        }

        if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
        {
            LO.push({i, s[i]});
        }
        else if (s[i] >= 'a' && s[i] <= 'z' && s[i] == 'b')
        {
            if (!LO.empty())
            {
                LO.pop();
            }
        }
    }

    vector<pair<int, char>> ans;

    while (!UP.empty())
    {
        ans.pb({UP.top().fi, UP.top().se});

        // cout<<UP.top().fi<<" --> "<<UP.top().se<<endl;
        UP.pop();
    }
    while (!LO.empty())
    {
        ans.pb({LO.top().fi, LO.top().se});

        // cout<<LO.top().fi<<" --> "<<LO.top().se<<endl;
        LO.pop();
    }

    sort(ans.begin(), ans.end());

    trav(a, ans)
    {
        cout<<a.se;
    }
    cout<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
