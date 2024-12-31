/***********************************************************************

Name --> E. Eating Queries
Link --> https://codeforces.com/problemset/problem/1676/E

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
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    trav(A, a) cin >> A;

    sort(rall(a));

    vector<int> pSum(n);
    PSUM(a, pSum);

    // trav(A, pSum)
    // {
    //     cout << A << " ";
    // }
    // cout << endl;

    while (q--)
    {
        int x;
        cin >> x;

        // int l = 0, r = n - 1, mid;
        // int ans = -1;

        // while (l <= r)
        // {
        //     mid = (l + r) / 2;

        //     if (x <= pSum[mid])
        //     {
        //         ans = mid;

        //         r = mid - 1;
        //     }
        //     else
        //         l = mid + 1;
        // }

        //--> Alternative...using buildin function....(..lowerbound binary searcj use kore..)
        int ans = -1;
        auto it = lower_bound(all(pSum), x);
        if (it != pSum.end())
        {
            ans = it - pSum.begin();
        }

        if (ans != -1)
            cout << ans + 1 << endl;
        else
            cout << ans << endl;
    }
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
