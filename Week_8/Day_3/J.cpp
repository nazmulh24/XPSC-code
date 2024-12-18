/***********************************************************************

Name --> J - Swap and Delete
Link --> https://vjudge.net/contest/679642#problem/J

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
    string s;
    cin >> s;

    int one = 0, zero = 0;

    forl(i, 0, sz(s))
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }

    // cout << zero << " " << one << endl;

    forl(i, 0, sz(s))
    {
        if (s[i] == '1')
        {
            if (zero > 0)
                zero--;
            else
                break;
        }
        else
        {
            if (one > 0)
                one--;
            else
                break;
        }
    }

    cout << one + zero << endl;
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
