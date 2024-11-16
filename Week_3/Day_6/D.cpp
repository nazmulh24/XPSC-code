/***********************************************************************

Name --> D - Alt-Tab
Link -->

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

    stack<string> s;

    forl(i, 0, n)
    {
        string ss;
        cin >> ss;

        s.push(ss);
    }

    set<string> ans;

    while (!s.empty())
    {
        if (ans.find(s.top()) == ans.end())
        {
            ans.insert(s.top());
            string prnt = s.top();

            if (prnt.size() > 2)
                cout << prnt.substr(prnt.size() - 2);
        }

        s.pop();
    }

    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases

    while (t--)
    {
        solve();
    }

    return 0;
}
