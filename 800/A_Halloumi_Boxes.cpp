/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "28-04-2024"
 * Time: "23:56:01"
 *
 * File: "A_Halloumi_Boxes.cpp"
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
    int n, k;
    in n;
    in k;

    vi a(n);

    fr(0, n) in a[i];

    if (is_sorted(a.begin(), a.end()) || k > 1)
        yes;
    else
        no;
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