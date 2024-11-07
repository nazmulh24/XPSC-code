/***********************************************************************

Name --> D. Epic Transformation
Link --> https://codeforces.com/problemset/problem/1506/D

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
    int n;
    cin >> n;

    map<int, int> mpp;

    rep(i, 1, n + 1)
    {
        int x;
        cin >> x;

        mpp[x]++;
    }

    priority_queue<int> pq;

    for (auto [x, y] : mpp)
    {
        // cout << y << " -> " << x << endl;

        pq.push(y);
    }

    while (!pq.empty())
    {
        // cout << pq.top() << " ";
        // pq.pop();

        if (pq.size() < 2)
            break;

        int x, y;

        x = pq.top();
        pq.pop();
        x--;

        y = pq.top();
        pq.pop();
        y--;

        if (x > 0)
            pq.push(x);
        if (y > 0)
            pq.push(y);
    }

    int ans = 0;

    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;
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
