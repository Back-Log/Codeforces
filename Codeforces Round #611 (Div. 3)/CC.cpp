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
  vector<int>arr(n+1);
  map<int, int>mp;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    mp[arr[i]] = 1;
  }
 vector<int>zero;
  for (int i = 1; i <= n; i++)
  {
    if (mp[i] == 0)
    {
      zero.pb(i);
      // cout<<i<<" ";
    }
  }
//Here is cool trick to solve this problem
  while(true)
  {
    random_shuffle(zero.begin(),zero.end());
    int st=0;
    vector<int>copy=arr;
    for(int i=1;i<=n;i++)
    {
      if(copy[i]==0)
      {
        copy[i]=zero[st++];
      }
    }
    //now check permutation is right or not
  bool ok=true;
    for(int i=1;i<=n;i++)
    {
      if(copy[i]==i)
      {
        ok=false;
      }
    }
    if(ok)
    {
    for(int i=1;i<=n;i++)
    {
      cout<<copy[i]<<" ";
    }
    cout<<endl;
    break;
    }
 

  }




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