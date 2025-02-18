/***********************************************************************

Name --> I - Asterisk-Minor Template
Link -->

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

void solve()
{
    string a, b;
    cin >> a >> b;

    string f = "", s = "";
    int as = sz(a), bs = sz(b);

    forl(i, 0, as - 2)
    {
        forl(j, 0, bs - 2)
        {
            if (a[i] == b[j] and a[i + 1] == b[j + 1])
            {
                f = a[i];
                s = a[i + 1];
                break;
            }
        }

        if (f != "")
            break;
    }

    if (f != "")
    {
        yes;
        cout << "*" << f << s << "*" << endl;
    }
    else
    {
        if (a[0] == b[0])
        {
            yes;
            cout << a[0] << "*" << endl;
        }
        else if (a[as - 1] == b[bs - 1])
        {
            yes;
            cout << "*" << a[as - 1] << endl;
        }
        else
            no;
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
