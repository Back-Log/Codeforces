/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin>>n;
  set<int>ans;
  ans.insert(0);
  ans.insert(1);

  ans.insert(n);
  for(int i=sqrt(n);i>=1;i--)
  {
  int val=n/i;
  while(val>=1)
  {
    ans.insert(n/val);
    ans.insert(n/(val+1));
    val/=2;
    // val-=(val/2);
  }
}
 cout<<ans.size()<<endl;
 for(auto i:ans)
 {
  cout<<i<<" ";
 }

cout<<endl;

}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }


  return 0;
}
