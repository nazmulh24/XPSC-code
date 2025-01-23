/***********************************************************************

Name --> B. Kana and Dragon Quest game
Link --> https://codeforces.com/problemset/problem/1337/B

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
    int x, n, m;
    cin >> x >> n >> m;

    while (x > 0 and n > 0 and floor(x / 2) + 10 < x)
    {
        n--;
        x = floor(x / 2) + 10;
    }

    if (x <= m * 10)
        yes;
    else
        no;
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
