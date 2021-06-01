/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define pb push_back
const int N = 103;
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

void solve()
{

  vector<vector<int>>mp(N, vector<int>(N));
  int n;
  cin >> n;
  int arr[n + 1];
  int val = INT_MIN, index;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    if (arr[i] > val)
    {
      val = arr[i];
      index = i;
    }
  }

  mp[1][index] = val;
  arr[index] = -1;
  for (int i = 2; i <= n; i++)
  {
    int prev = INT_MIN, next = INT_MIN;
    int pi, ni;
    for(int j=0;j<=n;j++)
    {
      mp[i][j]=mp[i-1][j];
    }
    for (int j = index; j > 0; j--)
    {
      if (arr[j] >= prev)
      {
        prev = arr[j];
        pi = j;
      }
    }
    // show(pi);
    for (int j = index; j <= n; j++)
    {
      if (arr[j] > next)
      {
        next = arr[j];
        ni = j;
      }
    }
    // show(pi);

    if(next>prev)
    {
      mp[i][ni]=next;
      arr[ni]=-1;
      index=ni;
    }
    else
    {
      mp[i][pi]=prev;
      arr[pi]=-1;
      index=pi;
    }


  }

// show(mp);
  int q;
  cin>>q;
while(q--)
{
  int k,pos;
  cin>>k>>pos;
 int c=0;
 for(int i=1;i<=n;i++)
 {
   if(mp[k][i]!=0)
   {
    c++;
   }
   if(c==pos)
   {
    cout<<mp[k][i]<<endl;
    break;
   }

 }
 


}



}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  while (t--)
  {
    solve();
  }


  return 0;
}
