/***********************************************************************

Name --> NASA
Link --> https://www.codechef.com/problems/PALIXOR

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

bool isPalindrom(int x)
{
    string s = to_string(x), t;
    t = s;

    reverse(all(t));

    return (t == s);
}

const int maxN = (1ll << 15);

vector<int> allPalindrome;

void check()
{
    forl(i, 0, maxN)
    {
        if (isPalindrom(i))
            allPalindrome.pb(i);
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), cnt(maxN + 1);
    trav(A, a)
    {
        cin >> A;
        cnt[A]++;
    }

    int ans = n;

    forl(i, 0, n)
    {
        forl(j, 0, sz(allPalindrome))
        {
            int curr = (a[i] ^ allPalindrome[j]);

            ans += cnt[curr];
        }
    }

    cout << (ans / 2) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    check();

    int ttttt = 1;
    cin >> ttttt; //--> Uncomment if multiple test cases

    while (ttttt--)
    {
        solve();
    }

    return 0;
}
