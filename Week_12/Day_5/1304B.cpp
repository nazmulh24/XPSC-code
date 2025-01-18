/***********************************************************************

Name --> B. Longest Palindrome
Link --> https://codeforces.com/problemset/problem/1304/B

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

const int MAX_N = 100;
string s[MAX_N];

void solve()
{
    int n, m;
    cin >> n >> m;

    set<string> st;

    forl(i, 0, n)
    {
        cin >> s[i];
        st.insert(s[i]);
    }

    vector<string> l, r;
    string mid;

    forl(i, 0, n)
    {
        string t = s[i];
        reverse(all(t));

        if (t == s[i])
            mid = t;
        else if (st.find(t) != st.end())
        {
            l.pb(s[i]);
            st.erase(s[i]);

            r.pb(t);
            st.erase(t);
        }
    }

    cout << sz(l) * m * 2 + sz(mid) << endl;
    trav(x, l) cout << x;
    cout << mid;

    reverse(all(r));
    trav(x, r) cout << x;
    cout << endl;
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
