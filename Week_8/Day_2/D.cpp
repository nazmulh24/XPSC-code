/***********************************************************************

Name --> D - Grandma Capa Knits a Scarf
Link --> https://vjudge.net/contest/679642#problem/D

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

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = INT_MAX;

    forl(i, 0, 26)
    {
        bool flag = false;
        int cnt = 0;

        int l = 0, r = n - 1;

        while (l < r)
        {
            if (s[l] != s[r])
            {
                if (s[l] == char(i + 97))
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == char(i + 97))
                {
                    r--;
                    cnt++;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }

        if (!flag)
            ans = min(ans, cnt);
    }

    if (ans == INT_MAX)
        cout << -1 << endl;
    else
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
