/***********************************************************************

Name --> G - Compare T-Shirt Sizes
Link --> https://vjudge.net/contest/670883#problem/G

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
    string str1, str2;
    cin >> str1 >> str2;

    int x1 = 0, x2 = 0;
    char last1 = str1.back();
    char last2 = str2.back();

    forl(i, 0, str1.size())
    {
        if (str1[i] == 'X')
            x1++;
    }
    forl(i, 0, str2.size())
    {
        if (str2[i] == 'X')
            x2++;
    }

    if (last1 != last2)
    {
        if (last1 == 'S')
            cout << "<" << endl;
        else if (last1 == 'M' && last2 != 'S')
            cout << (last2 == 'L' ? "<" : "=") << endl;
        else
            cout << ">" << endl;
    }
    else
    {
        if (last1 == 'S')
        {
            if (x1 > x2)
                cout << "<" << endl;
            else if (x1 < x2)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
        else
        {
            if (x1 > x2)
                cout << ">" << endl;
            else if (x1 < x2)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        }
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
