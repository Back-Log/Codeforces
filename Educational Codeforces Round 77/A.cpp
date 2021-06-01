/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int MOD = 1e16 + 7;
int pow(int a, int n, int MOD)
{
  int result = 1;
  while (n > 0)
  {
    if (n & 1)
    {
      result *= a % MOD;
      result = ((result % MOD) + MOD) % MOD;
    }

    a *= a % MOD;
    //handling negative modulo
    a = ((a % MOD) + MOD) % MOD;
    n = n >> 1;
  }
  return result;

}
void solve()
{

  int c, sum;
  cin >> c >> sum;
  if (c > sum)
  {
    cout << sum << endl;
    return;
  }

  if (sum % c == 0)
  {
    int val = sum / c;
    int ans = c * pow(val, 2,MOD);
    cout << ans << endl;
    return;

  }
  int up = (sum + c - 1) / c;
  int ntime, nm1time;
  auto possible = [&](int n)
  {

    int rem = sum - up * n;
    if ((rem % (up - 1)) == 0)
    {
      int done = rem / (up - 1);
      if ((done + n) == c)
      {
        ntime = n;
        nm1time = done;
        return true;
      }

    }
    return false;

  };

  int st = 1;
  while (!possible(st))
  {
    st++;

  }
  cout << (ntime * pow(up, 2,MOD)) + (nm1time * pow((up - 1), 2,MOD)) << endl;
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
