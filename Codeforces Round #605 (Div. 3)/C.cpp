/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  map<char,bool>mp;
  while(k--)
  {
char c;
cin>>c;
mp[c]=true;

  }
  int ans=n*(n+1)/2;
  int st=-1;
  int val=0;
 for(int i=0;i<n;i++)
 {
  if(mp[s[i]]==false)
  {
  val+=((i-st)*( n-i));
  st=i;
  }

 }


cout<<ans-val<<endl;
}
int32_t main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  while(t--)
  {
    solve();
  }


  return 0;
}