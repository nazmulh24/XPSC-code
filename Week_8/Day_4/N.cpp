/***********************************************************************

Name --> N - Stripes
Link --> https://vjudge.net/contest/679642#problem/N

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
    string s[8];

    forl(i, 0, 8)
    {
        cin >> s[i];
    }

    bool ans = false;

    forl(i, 0, 8)
    {
        if (count(all(s[i]), 'R') == 8)
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << "R" << endl;
        return;
    }

    rfor(i, 7, 0)
    {
        ans = false;

        forl(j, 0, 8)
        {
            if (s[j][i] != 'B')
            {
                ans = true;
                break;
            }
        }

        if (!ans)
        {
            cout << "B" << endl;
            return;
        }
    }

    cout << "." << endl;
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
