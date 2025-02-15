/***********************************************************************

Name --> A - 3SUM
Link --> https://vjudge.net/contest/691268#problem/A

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
    int n;
    cin >> n;

    map<int, int> m;
    forl(i, 1, n)
    {
        int x;
        cin >> x;

        x = x % 10;

        m[x]++;
    }

    forl(i, 0, 9)
    {
        forl(j, 0, 9)
        {
            forl(k, 0, 9)
            {
                int a = -1, b = -1, c = -1;

                if (m[i] != 0)
                {
                    a = 1;
                    m[i]--;
                }

                if (m[j] != 0)
                {
                    b = 1;
                    m[j]--;
                }

                if (m[k] != 0)
                {
                    c = 1;
                    m[k]--;
                }

                if (a == 1 and b == 1 and c == 1)
                {
                    int sum = i + j + k;

                    if (sum % 10 == 3)
                    {
                        yes;
                        return;
                    }
                }

                if (a == 1)
                    m[i]++;
                if (b == 1)
                    m[j]++;
                if (c == 1)
                    m[k]++;
            }
        }
    }

    no;
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
