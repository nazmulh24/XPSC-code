/***********************************************************************

Name --> E - Cypher
Link --> https://vjudge.net/contest/669017#problem/E

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

    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    vector<int> v;

    int k = 0;

    while (n--)
    {
        int x;
        string s;
        cin >> x >> s;

        rep(i, 0, x)
        {
            if (a[k] == 9 && s[i] == 'D')
            {
                a[k] = 0;
            }
            else if (s[i] == 'D')
            {
                a[k]++;
            }
            if (a[k] == 0 && s[i] == 'U')
            {
                a[k] = 9;
            }
            else if (s[i] == 'U')
            {
                a[k]--;
            }
        }

        v.pb(a[k]);
        k++;
    }

    trav(A, v)
    {
        cout << A << " ";
    }
    cout << endl;
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
