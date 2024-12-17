/***********************************************************************

Name --> F - Keep it Beautiful
Link --> https://vjudge.net/contest/679642#problem/F

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

    vector<int> a(n), temp;

    string ans = "";
    bool flag = false;

    forl(i, 0, n)
    {
        cin >> a[i];

        if (temp.empty())
        {
            ans.pb('1');
            temp.pb(a[i]);
        }
        else
        {
            if (flag)
            {
                if (a[i] < temp.back())
                    ans.pb('0');
                else
                {
                    if (a[i] > temp[0])
                        ans.push_back('0');
                    else
                    {
                        ans.pb('1');
                        temp.pb(a[i]);
                    }
                }
            }
            else
            {
                if (a[i] >= temp.back())
                {
                    ans.pb('1');
                    temp.pb(a[i]);
                }
                else
                {
                    if (a[i] > temp[0])
                        ans.pb('0');
                    else
                    {
                        flag = true;
                        ans.pb('1');
                        temp.pb(a[i]);
                    }
                }
            }
        }
    }

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
