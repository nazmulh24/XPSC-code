/***********************************************************************

Name --> D. Xenia and Bit Operations
Link --> https://codeforces.com/problemset/problem/339/D

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

const int maxN = (1 << 17) + 9;
int a[maxN], t[4 * maxN];

int merge(int ans_l, int ans_r, int len)
{
    int pw = 0;

    pw = __lg(len);

    if (pw & 1)
        return (ans_l | ans_r);
    else
        return (ans_l ^ ans_r);
}

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

    t[n] = merge(t[l], t[r], e - b + 1);
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

    t[n] = merge(t[l], t[r], e - b + 1);
}

void solve()
{
    int n, q;
    cin >> n >> q;

    n = (1 << n);

    forl(i, 1, n) cin >> a[i];

    build(1, 1, n);

    while (q--)
    {
        int i, x;
        cin >> i >> x;

        update(1, 1, n, i, x);

        cout << t[1] << endl;
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
