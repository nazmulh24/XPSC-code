/***********************************************************************

Name --> M - Sort with Step
Link --> https://vjudge.net/contest/679642#problem/M

Example-->

------------------------------------------------------------------------
Author --> Nazmul Hossain
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
#define forl(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

bool ok(vector<int> a)
{
    forl(i, 0, sz(a) - 1)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> q(n);
    trav(A, q) cin >> A;

    vector<int> temp = q;
    sort(all(temp));

    map<int, int> m2;
    map<int, set<int>> m;

    forl(i, 0, n)
    {
        m[i % k].insert(q[i]);
    }

    forl(i, 0, n)
    {
        auto it = m[i % k];

        if (it.find(temp[i]) == it.end())
        {
            m2[i % k]++;
        }
    }

    if (m2.size() == 0)
    {
        cout << "0" << endl;
        return;
    }

    int cnt = 0;
    trav(A, m2)
    {
        if (A.se == 1)
            cnt++;
        else
            cnt += 1000;
    }

    if (cnt == 2)
        cout << "1" << endl;
    else
        cout << "-1" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
