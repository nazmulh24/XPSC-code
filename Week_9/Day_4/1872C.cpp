/***********************************************************************

Name --> C. Non-coprime Split
Link --> https://codeforces.com/problemset/problem/1872/C

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

int findDivisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

//********************************************************************

void solve()
{
    int l, r;
    cin >> l >> r;

    bool found = false;

    forl(x, l, r + 1)
    {
        int temp = findDivisor(x);
        if (temp != x)
        {
            cout << temp << " " << x - temp << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << -1 << endl;
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
