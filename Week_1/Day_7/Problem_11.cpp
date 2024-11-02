/***********************************************************************

Name --> A. Strong Password
Link --> https://codeforces.com/problemset/problem/1997/A

Example-->


***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
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

    bool flag = false;

    rep(i, 0, s.size() - 1)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == 'z')
            {
                s.insert(s.begin() + i + 1, 'a');
                flag = true;
                break;
            }
            else
            {
                char c1 = s[i] + 1;
                s.insert(s.begin() + i + 1, c1);
                flag = true;
                break;
            }
        }
    }

    if (!flag)
    {
        if (s.back() == 'z')
            s += 'a';
        else
        {
            char c2 = s.back() + 1;
            s += c2;
        }
    }

    cout << s << endl;
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
