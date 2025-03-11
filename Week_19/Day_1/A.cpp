/***********************************************************************

Name --> A. Segment Tree for the Sum
Link --> https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A

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

const int maxN = 1e5 + 9;
int a[maxN], t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n, r = (2 * n) + 1;

    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || e < i)
        return;

    if (b == e)
    {
        t[n] = v;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n, r = (2 * n) + 1;

    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return 0;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2;
    int l = 2 * n, r = (2 * n) + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    forl(i, 1, n) cin >> a[i];

    build(1, 1, n);

    while (m--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int i, v;
            cin >> i >> v;

            i++;

            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;

            l++;

            int ans = query(1, 1, n, l, r);

            cout << ans << endl;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ttttt = 1;
    // cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
