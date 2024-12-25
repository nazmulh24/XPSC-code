/***********************************************************************

Name --> C - Sort with Step
Link --> https://vjudge.net/contest/681187#problem/C

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

//********************************************************************

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    trav(a, p) cin >> a;

    map<int, int> m2;
    vector<int> temp = p;

    sort(all(temp));

    map<int, set<int>> m1;
    forl(i, 0, n)
    {
        m1[i % k].insert(p[i]);
    }

    forl(i, 0, n)
    {
        auto it = m1[i % k];

        if (it.find(temp[i]) == it.end())
            m2[i % k]++;
    }

    if (sz(m2) == 0)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    trav(a, m2)
    {
        if (a.se == 1)
            cnt++;
        else
            cnt += 1000;
    }

    if (cnt == 2)
        cout << 1 << endl;
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
