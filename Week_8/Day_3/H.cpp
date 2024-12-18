/***********************************************************************

Name --> H - MEX Repetition
Link --> https://vjudge.net/contest/679642#problem/H

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

int findMEX(set<int> &st)
{
    int cur = 0;

    while (st.find(cur) != st.end())
    {
        cur++; //--> If cur exists in the set, increment
    }

    return cur;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    set<int> st;
    trav(A, a)
    {
        cin >> A;
        st.insert(A);
    }

    // cout << findMEX(st) << endl;

    if (n == 1)
    {
        if (k % 2 == 1)
            a[0] = 1 - a[0];

        cout << a[0] << endl;
        return;
    }

    k = k % (n + 1);

    if (k == 0)
    {
        trav(A, a) cout << A << " ";
        cout << endl;
        return;
    }

    forl(i, n - k + 1, n)
    {
        cout << a[i] << " ";
    }

    cout << findMEX(st) << " ";

    forl(i, 0, n - k)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
