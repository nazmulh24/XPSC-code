/***********************************************************************

Name --> G - Sum of Three Values
Link --> https://vjudge.net/contest/682611#problem/G

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

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    forl(i, 0, n)
    {
        int z;
        cin >> z;

        a[i] = mp(z, i);
    }

    sort(all(a));

    int tr;

    forl(i, 0, n - 2)
    {
        int req_Sum = x - a[i].fi;
        int st = i + 1, en = n - 1;

        while (en > st)
        {
            tr = a[st].fi + a[en].fi;

            if (tr == req_Sum)
            {
                cout << a[i].se + 1 << " " << a[st].se + 1 << " " << a[en].se + 1 << endl;
                return;
            }
            else if (tr < req_Sum)
                st++;
            else
                en++;
        }
    }

    cout << "IMPOSSIBLE" << endl;
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
