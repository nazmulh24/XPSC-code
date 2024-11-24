/***********************************************************************

Name -->
Link -->

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
#define forl(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor(i, b, a) for (int i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

int A(int x, int k)
{
    int tmp = (x >> k);

    return (tmp & 1);
}

void B(int x)
{
    rfor(k, 32, 0)
    {
        int i = A(x, k);

        if (i)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    cout << endl;
}

int C(int x, int k)
{
    int tmp = (1 << k);
    return (x | tmp);
}

int D(int x, int k)
{
    int tmp = (1 << k);

    return (x & (~tmp));
}

int E(int x, int k)
{
    int tmp = (1 << k);

    return (x ^ tmp);
}

void solve()
{
    int x;
    cin >> x;

    int k;
    cin >> k;

    //------------> Check k'th bit is on/off (1/0)
    // cout << A(x, k) << endl;

    //------------> Print on/off (1/0) bits
    // B(x);

    //------------> Tern On k'th bit
    // cout << C(x, k) << endl;

    //------------> Tern Off k'th bit
    // cout << D(x, k) << endl;

    //------------> Toggle k'th bit
    cout << E(x, k) << endl;
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
