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
  // vector<pair<int,int>>v;
  int xmax=INT_MIN,ymin=INT_MAX;

  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    // v.pb({x,y})
    xmax= max(xmax,x);
    ymin=min(ymin,y);

  }
  int val=(xmax-ymin);
cout<<max(0LL,val)<<endl;


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
