/***********************************************************************

Name --> C. Pair Programming
Link --> https://codeforces.com/problemset/problem/1547/c

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
#define forl(i, a, b) for (int i = (a); i <= (b); ++i)
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
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> a(n), b(m);
    trav(A, a) cin >> A;
    trav(B, b) cin >> B;

    vector<int> ans;

    int pos1 = 0, pos2 = 0;

    while (pos1 != n || pos2 != m)
    {
        if (pos1 != n and a[pos1] == 0)
        {
            ans.pb(0);
            k++;
            pos1++;
        }
        else if (pos2 != m and b[pos2] == 0)
        {
            ans.pb(0);
            k++;
            pos2++;
        }
        else if (pos1 != n and a[pos1] <= k)
            ans.pb(a[pos1++]);
        else if (pos2 != m and b[pos2] <= k)
            ans.pb(b[pos2++]);
        else
        {
            cout << -1 << endl;
            return;
        }
    }

    trav(x, ans) cout << x << " ";
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
