/***********************************************************************

Name --> N - Chef and Prime Divisors
Link --> https://vjudge.net/contest/685500#problem/N

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

set<int> pFactor(int b)
{
    set<int> p;

    while (b % 2 == 0)
    {
        p.insert(2);
        b /= 2;
    }

    for (int i = 3; i * i <= b; i += 2)
    {
        while (b % i == 0)
        {
            p.insert(i);
            b /= i;
        }
    }

    if (b > 2)
        p.insert(b);

    return p;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    set<int> pFtor = pFactor(b);
    bool ok = true;

    trav(p, pFtor)
    {
        if (a % p != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
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
