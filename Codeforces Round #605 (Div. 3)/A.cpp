/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int dist(int a,int b,int c)
{

 int ans=abs(a-b)+abs(a-c)+abs(b-c);

return ans;
}
void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int ans=INT_MAX;
  ans=min(ans,dist(a,b,c-1));
  ans=min(ans,dist(a,b,c+1));
  ans=min(ans,dist(a,b,c));
  ans=min(ans,dist(a,b-1,c));
  ans=min(ans,dist(a,b-1,c+1));
  ans=min(ans,dist(a,b-1,c-1));
  ans=min(ans,dist(a,b+1,c));
  ans=min(ans,dist(a,b+1,c-1));
  ans=min(ans,dist(a,b+1,c+1));

  //2nd
   ans=min(ans,dist(a-1,b,c-1));
  ans=min(ans,dist(a-1,b,c+1));
  ans=min(ans,dist(a-1,b,c));
  ans=min(ans,dist(a-1,b-1,c));
  ans=min(ans,dist(a-1,b-1,c+1));
  ans=min(ans,dist(a-1,b-1,c-1));
  ans=min(ans,dist(a-1,b+1,c));
  ans=min(ans,dist(a-1,b+1,c-1));
  ans=min(ans,dist(a-1,b+1,c+1));

  //3rd
   ans=min(ans,dist(a+1,b,c-1));
  ans=min(ans,dist(a+1,b,c+1));
  ans=min(ans,dist(a+1,b,c));
  ans=min(ans,dist(a+1,b-1,c));
  ans=min(ans,dist(a+1,b-1,c+1));
  ans=min(ans,dist(a+1,b-1,c-1));
  ans=min(ans,dist(a+1,b+1,c));
  ans=min(ans,dist(a+1,b+1,c-1));
  ans=min(ans,dist(a+1,b+1,c+1));
 
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