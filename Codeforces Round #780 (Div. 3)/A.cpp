#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{

    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 * b + a + 1 << endl;



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
