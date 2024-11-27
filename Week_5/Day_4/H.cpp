/***********************************************************************

Name --> H - Matrix of Differences
Link --> https://vjudge.net/contest/674807#problem/H

Example-->


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

    int mat[n + 1][n + 1];

    int mn = 1, mx = n * n;
    int tr = 1;

    forl(i, 1, n + 1)
    {
        if (i % 2 != 0)
        {
            forl(j, 1, n + 1)
            {
                if (tr % 2 != 0)
                {
                    mat[i][j] = mn;
                    mn++;
                }
                else
                {
                    mat[i][j] = mx;
                    mx--;
                }

                tr++;
            }
        }
        else
        {
            rfor(j, n, 1)
            {
                if (tr % 2 != 0)
                {
                    mat[i][j] = mn;
                    mn++;
                }
                else
                {
                    mat[i][j] = mx;
                    mx--;
                }

                tr++;
            }
        }
    }

    forl(i, 1, n + 1)
    {
        forl(j, 1, n + 1)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
