/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
//This is a very good question in terms of thinking
void solve()
{
  int n;
  cin>>n;
  map<int,int>mp;
  for(int i=1;i<=n;i++)
  {
    int a;
    cin>>a;
    mp[a]=i;
  }
 string ans;
 int left=INT_MAX,right=INT_MIN;

 for(int i=1;i<=n;i++)
 {
   left=min(left,mp[i]);
   right=max(right,mp[i]);
   if(right-left+1==i)
   {
    ans+='1';
   }
  else ans+='0';

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
