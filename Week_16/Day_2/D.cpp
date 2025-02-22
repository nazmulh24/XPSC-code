/***********************************************************************

Name --> D - Masha and a Beautiful Tree
Link --> https://vjudge.net/contest/691267#problem/D

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

int ans = 0;
vector<int> a;

void Call(int l1, int r1, int l2, int r2)
{
    int mx = 0, mn = INT_MAX;

    forl(i, l1, r1) mx = max(mx, a[i]);

    forl(i, l2, r2) mn = min(mn, a[i]);

    if (mx > mn)
    {
        int j = l2;

        forl(i, l1, r1)
        {
            swap(a[i], a[j]);
            j++;
        }

        ans++;
    }

    if (l1 == r1)
        return;

    int mid1 = (l1 + r1) / 2;
    Call(l1, mid1, mid1 + 1, r1);

    int mid2 = (l2 + r2) / 2;
    Call(l2, mid2, mid2 + 1, r2);
}

void solve()
{
    int n;
    cin >> n;

    a.resize(n + 1);
    forl(i, 1, n) cin >> a[i];

    ans = 0;

    if (is_sorted(all(a)))
    {
        cout << 0 << endl;
        return;
    }

    int mid = (1 + n) / 2;

    Call(1, mid, mid + 1, n);

    if (is_sorted(all(a)))
        cout << ans << endl;
    else
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
