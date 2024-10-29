/***********************************************************************

Name --> C. Registration system
Link --> https://codeforces.com/contest/4/problem/C

Example-->


***********************************************************************/

#include <bits/stdc++.h>
#include <iostream>
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
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            string new_name = s;

            while (mp[new_name] > 0)
            {
                new_name = s + to_string(mp[s]);
                mp[s]++;
            }

            cout << new_name << endl;
            mp[new_name] = 1;
        }
    }
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
