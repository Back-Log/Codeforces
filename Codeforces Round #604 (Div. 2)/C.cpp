/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/

#include<bits/stdc++.h>
using namespace std;
// #define int long long
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

#define pb push_back
void solve()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int can=n/2;
  //first find gold
  int g=0;
  int i=0;
 while((i+1)<n and arr[i]==arr[i+1] )
 {
   i++;
 }
 g=i+1;
 int silverPos=i+g+1;
 int s=g+1;
 while((silverPos+1)<n and arr[silverPos]==arr[silverPos+1])
 {
  silverPos++;
  s++;
 }
 int bronzPos=silverPos+g+1;
 int b=g+1;
 int rem=can-(g+s+b);
 show(rem);
 while(rem>0 and (bronzPos)<n)
 {
  rem--;
  b++;
  bronzPos++;
 }
 if(bronzPos<(n-1))
 {
 while(bronzPos>=0 and arr[bronzPos]==arr[bronzPos+1])
 {
   bronzPos-=1;
   b--;
 }
  
 }
 show(g,s,b);
if(g>=b or g>=s or g==0 or b==0 or s==0 or (g+s+b)>can)
{
  cout<<0<<" "<<0<<" "<<0<<endl;
}
else
{
  cout<<g<<" "<<s<<" "<<b<<endl;


}

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
