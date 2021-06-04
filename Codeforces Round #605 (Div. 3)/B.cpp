/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define show(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define show(x...)
#endif

#define int long long
#define pb push_back
void solve()
{
  
 string s;
 cin>>s;
 map<char,int>mp;
 for(auto i:s)
 {
  mp[i]++;
 }
string ans;
int lr=min(mp['L'],mp['R']);
// show(lr);
ans+=(string(lr,'L'));
// show(ans);
int ud=min(mp['U'],mp['D']);
ans+=string(ud,'U');
ans+=string(lr,'R');
ans+=string(ud,'D');
if(ud==0 or lr==0)
{
    ans="";
  if(lr>=1)
  {
    ans+="LR";
  }
  else if(ud>=1)
  {
    ans+="UD";
  }
}
cout<<ans.size()<<endl;
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