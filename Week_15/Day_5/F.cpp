/***********************************************************************

Name --> F - K-Sort
Link --> https://vjudge.net/contest/691268#problem/F

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

    vector<int> a(n);
    trav(A, a) cin >> A;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap (same as Java's PriorityQueue)
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            pq.push(a[i - 1] - a[i]); // Store the difference in min-heap
            a[i] = a[i - 1];          // Make non-decreasing
        }
    }

    int done = 0;

    while (!pq.empty())
    {
        int top = pq.top();
        pq.pop();
        top -= done;

        ans += (pq.size() + 2) * top;
        done += top;
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
