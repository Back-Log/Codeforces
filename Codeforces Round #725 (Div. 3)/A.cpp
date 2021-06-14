#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void solve()
{
  int n;
  cin>>n;
  int arr[n+1];
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    v.pb({arr[i],i});
  }
sort(v.begin(), v.end());

int mxPos=v[n-1].second;
int mnPos=v[0].second;
vector<int>ans;
ans.pb(max(mnPos,mxPos)+1);
ans.pb((n)-min(mnPos,mxPos));

//case 1
int val1=abs(mnPos+1);
int val2=abs((n)-mxPos);
int total1=val1+val2;
ans.pb(total1);
int val3=abs(mxPos+1);
int val4=abs((n)-mnPos);
int total2=val3+val4;
ans.pb(total2);
sort(ans.begin(), ans.end());

cout<<ans[0]<<endl;




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