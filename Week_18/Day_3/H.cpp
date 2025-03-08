/***********************************************************************

Name --> H - Closest Cities
Link --> https://vjudge.net/contest/697692#problem/H
    https://codeforces.com/problemset/problem/1922/C

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
#define forl(i, a, b) for (auto i = (a); i <= (b); ++i)
#define rfor(i, b, a) for (auto i = (b); i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int GCD(int a, int b)
{
    return __gcd(a, b); //--> O(log(min(a, b)))
}

int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; //--> O(log(min(a, b)))
}

void PSUM(vector<int> a, vector<int> &pSum)
{
    int n = sz(a);
    pSum[0] = a[0];
    forl(i, 1, n)
    {
        pSum[i] = pSum[i - 1] + a[i];
    }
}

//********************************************************************

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    forl(i, 1, n) cin >> a[i];

    vector<int> F(n + 1), R(n + 1);

    F[0] = 0, F[1] = 0, F[2] = 1;

    forl(i, 2, n - 1)
    {
        int l = a[i] - a[i - 1];
        int r = a[i + 1] - a[i];

        if (l > r)
            F[i + 1] = F[i] + 1;
        else
            F[i + 1] = F[i] + r;
    }

    R[n] = 0, R[n - 1] = 1;

    rfor(i, n - 1, 2)
    {
        int l = a[i] - a[i - 1];
        int r = a[i + 1] - a[i];

        if (l < r)
            R[i - 1] = R[i] + 1;
        else
            R[i - 1] = R[i] + l;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l < r)
            cout << F[r] - F[l] << endl;
        else
            cout << R[r] - R[l] << endl;
    }
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
