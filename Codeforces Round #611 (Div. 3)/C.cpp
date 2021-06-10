/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin >> n;
  vector<int>arr(n + 1);
  map<int, int>mp;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    mp[arr[i]] = 1;
  }
  vector<int>zero = arr;
  set<int, greater<int>>s;
  for (int i = 1; i <= n; i++)
  {
    if (mp[i] == 0)
    {
      s.insert(i);
      // cout<<i<<" ";
    }
  }
  // cout<<"OK";
  int req = s.size();
  int count = 0;
  int i;
  for (i = 1; i <= n; i++)
  {
    if (arr[i] == 0)
    {
      count++;
      int ans = 0;
      for (auto val : s)
      {
        if (val != i)
        {
          ans = val;
          break;
        }
      }
      // cout<<ans;
      auto it = s.find(ans);
      if (it != s.end())
        s.erase(it);
      assert(ans != 0);
      arr[i] = ans;
    }
    if (count == (req - 1)) break;

  }
  int pos = 0;
  for (int j = i; j <= n; j++)
  {
    if (arr[j] == 0)
    {
      pos = j;
      break;
    }
  }
  int last = *s.begin();

  if (last != pos)
  {
    arr[pos] = last;
  }
  else
  {
    bool ok = true;
    arr[pos]=last;
    for (int i = pos + 1; i <= n; i++)
    {
      if (zero[i] == 0)
      {
        ok = false;
        swap(arr[pos], arr[i]);
        break;
      }
    }
    if (ok)
    {
      for (int i = pos - 1; i >= 1; i--)
      {
        if (zero[i] == 0)
        {
          ok = false;
          swap(arr[pos], arr[i]);
        }
      }
    }

  }

  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
    assert(arr[i] != i);
  }
  cout << endl;

}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  //cin>>t;
  while (t--)
  {
    solve();
  }


  return 0;
}