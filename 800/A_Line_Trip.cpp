/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "29-04-2024"
 * Time: "00:11:13"
 *
 * File: "A_Line_Trip.cpp"
 *
 **/

#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define int long long
#define pi pair<int, int>
#define vi vector<int>
#define nl << "\n"
#define yes out "YES" nl
#define no out "NO" nl
#define Yes out "Yes" nl
#define No out "No" nl
#define fr(x, n) for (int i = x; i < n; i++)

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vi a(n + 1);
    fr(0, n) in a[i];

    int mx = a[0];

    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, abs(a[i] - a[i + 1]));
    }

    int dis = abs(a[n - 1] - x) * 2;

    mx = max(mx, dis);
    // cout nl;
    out mx nl;
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    in t;

    fr(0, t) solve();

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}