/***********************************************************************

Name --> I - Binary Inversions
Link --> https://vjudge.net/contest/679642#problem/I

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

int Invertion(vector<int> v)
{
    int n = sz(v);

    int cnt = 0, one = 0;
    forl(i, 0, n)
    {
        if (v[i] == 1)
            one++;
        else
            cnt += one;
    }

    return cnt;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    trav(A, a) cin >> A;

    int ans = Invertion(a);
    // cout << ans << endl;

    int ind = -1;

    forl(i, 0, n)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ind = i;
            break;
        }
    }
    ans = max(ans, Invertion(a));

    if (ind != -1)
        a[ind] = 0;

    rfor(i, n - 1, 0)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ind = i;
            break;
        }
    }
    ans = max(ans, Invertion(a));

    cout << ans << endl;
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
