#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n;
  cin>>n;
  int arr[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  if(sum%n!=0)
  {
   cout<<-1<<endl;
  return;
  }

  int req=sum/n;
  //
  int ans=0;
  for(auto i:arr)
  {
    if(i>req) ans++;
  }
 
cout<<ans<<endl;


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