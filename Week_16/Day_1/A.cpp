/***********************************************************************

Name --> A - Anji's Binary Tree
Link --> https://vjudge.net/contest/691267#problem/A

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

const int N = 3e5 + 9;
vector<int> g[N], operation(N);
string s;

void dfs(int u)
{
    if (g[u][0] != 0)
    {
        int v = g[u][0];

        if (s[u - 1] != 'L')
            operation[v] = operation[u] + 1;
        else
            operation[v] = operation[u];

        dfs(v);
    }

    if (g[u][1] != 0)
    {
        int v = g[u][1];

        if (s[u - 1] != 'R')
            operation[v] = operation[u] + 1;
        else
            operation[v] = operation[u];

        dfs(v);
    }
}

void solve()
{
    int n;
    cin >> n;
    cin >> s;

    forl(i, 1, n) g[i].clear();

    forl(i, 1, n)
    {
        int l, r;
        cin >> l >> r;

        g[i].pb(l);
        g[i].pb(r);
    }

    dfs(1);

    int ans = INT_MAX;

    forl(i, 1, n)
    {
        if (g[i][0] == 0 and g[i][1] == 0)
        {
            // cout << i << " " << operation[i] << endl;

            ans = min(ans, operation[i]);
        }
    }

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
