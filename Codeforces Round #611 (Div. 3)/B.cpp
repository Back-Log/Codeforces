/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n,k;
  cin>>n>>k;
  int mx_req=k/2;
  int candis_per_child=n/k;
  if(n%k==0)
  {
    cout<<n<<endl;
    return;
  }
  int rem=k-mx_req;
  int ans=(candis_per_child+1)*mx_req+candis_per_child*rem;
  cout<<min(ans,n)<<endl;

 



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