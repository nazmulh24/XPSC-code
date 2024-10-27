/***********************************************************************

Name --> F - Not Found
Link --> https://vjudge.net/contest/666748#problem/F

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

    int fre[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int cnt = s[i] - 'a';
        fre[cnt]++;
    }

    int ans = -1;

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            ans = i;
            break;
        }
    }

    if (ans != -1)
        cout << char(ans + 'a') << endl;
    else
        cout << "None" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
