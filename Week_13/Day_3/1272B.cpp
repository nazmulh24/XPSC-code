/***********************************************************************

Name --> B. Snow Walking Robot
Link --> https://codeforces.com/problemset/problem/1272/B

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

const string Go = "LRUD";

void solve()
{
    string s;
    cin >> s;

    map<char, int> cnt;

    for (auto c : Go)
        cnt[c] = 0;

    for (auto c : s)
        cnt[c]++;

    int v = min(cnt['U'], cnt['D']);
    int h = min(cnt['L'], cnt['R']);

    if (min(v, h) == 0)
    {
        if (v == 0)
        {
            h = min(h, 1ll);
            cout << 2 * h << endl
                 << string(h, 'L') + string(h, 'R') << endl;
        }
        else
        {
            v = min(v, 1ll);
            cout << 2 * v << endl
                 << string(v, 'U') + string(v, 'D') << endl;
        }
    }
    else
    {
        string ans;
        
        ans += string(h, 'L');
        ans += string(v, 'U');
        ans += string(h, 'R');
        ans += string(v, 'D');

        cout << sz(ans) << endl
             << ans << endl;
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
