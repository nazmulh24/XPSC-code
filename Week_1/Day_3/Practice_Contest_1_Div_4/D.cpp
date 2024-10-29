/***********************************************************************

Name --> D - Change Please
Link -->

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
    int x;
    cin >> x;

    if (x > 90 && x <= 100)
        cout << 0 << endl;
    else if (x > 80 && x <= 90)
        cout << 10 << endl;
    else if (x > 70 && x <= 80)
        cout << 20 << endl;
    else if (x > 60 && x <= 70)
        cout << 30 << endl;
    else if (x > 50 && x <= 60)
        cout << 40 << endl;
    else if (x > 40 && x <= 50)
        cout << 50 << endl;
    else if (x > 30 && x <= 40)
        cout << 60 << endl;
    else if (x > 20 && x <= 30)
        cout << 70 << endl;
    else if (x > 10 && x <= 20)
        cout << 80 << endl;
    else if (x > 0 && x <= 10)
        cout << 90 << endl;
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
