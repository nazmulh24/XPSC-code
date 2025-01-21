/***********************************************************************

Name --> L - Turtle Fingers: Count the Values of k
Link --> https://vjudge.net/contest/685500#problem/L

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

vector<int> divisor(int n)
{
    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.pb(i);
            else
            {
                v.pb(i);
                v.pb(n / i);
            }
        }
    }

    return v;
}

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;

    vector<int> k = divisor(l), x, y;

    int tmp;

    forl(i, 0, 21)
    {
        tmp = pow(a, i);

        if (tmp <= 1e6)
            x.pb(tmp);
        else
            break;
    }

    forl(i, 0, 21)
    {
        tmp = pow(b, i);

        if (tmp <= 1e6)
            y.pb(tmp);
        else
            break;
    }

    int ans = 0;

    forl(i, 0, sz(k))
    {
        bool ok = false;

        forl(p, 0, sz(x))
        {
            forl(q, 0, sz(y))
            {
                if (k[i] * x[p] * y[q] == l)
                {
                    ans++;
                    ok = true;
                    break;
                }
            }

            if (ok)
                break;
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
