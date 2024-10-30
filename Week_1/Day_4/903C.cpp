/***********************************************************************

Name --> C. Boxes Packing
Link --> https://codeforces.com/contest/903/problem/C

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
    int n;
    cin >> n;

    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    map<int, int> freq;
    for (int box : v)
    {
        freq[box]++;
    }

    // Find the maximum frequency among all box sizes
    int max_stacks = 0;
    for (auto [box_size, count] : freq)
    {
        max_stacks = max(max_stacks, count);
    }

    cout << max_stacks << endl;
}

void solve2()
{
    int n;
    cin >> n;

    deque<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    sort(all(v));

    // trav(a, v)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    rep(j, 0, n - 1)
    {
        rep(i, 0, n - 1)
        {
            if (v[i] < v[i + 1])
            {
                v.pop_front();
                i--;
            }

            // cout << i << " -> " << v[i] << endl;
        }
    }

    cout << v.size() << endl;
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
