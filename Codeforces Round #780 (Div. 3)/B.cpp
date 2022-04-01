#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

    int n;
    cin >> n;
    std::vector<int> v(n);
    int mx = -1;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max(mx, a);
        v[i] = a;
        mp[a]++;
    }
    bool ok = 0;

    for (int i = 0; i < n; i++)
    {
        if ((mx - 1) == v[i]) ok = 1;
    }

    if (n == 1 and v[0] == 1) ok = 1;
    if (mp.size() == 1 and mp[v[0]]  > 1) ok = 1;
    if(mp[mx]>1) ok=1;

    cout << (ok ? "YES" : "NO") << endl;




}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }


    return 0;
}
