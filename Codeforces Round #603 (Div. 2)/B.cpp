/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define pb push_back
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
// bool check(vector<string>&input,int pos)
// {
//   int n=input.size();
//   pos%=4;
//   if(pos<0)
//   {
//     pos+=4;

//   }
//    for(int i=0;i<input.size();i++)
//   {
//     string first=input[i];
//     int st=first[pos]-'0';
//     for(int j=i+1;j<n;j++)
//     {
//       if(first==input[j])
//       {
//         st++;
//         string change=input[j];
//         st%=10;
//         // show(st);
//         change[pos]=st+'0';
//         // show(change);
//         input[j]=change;
//       }

//     }

//   }
//   set<string>c;
// for(int i=0;i<n;i++)
// {
//   c.insert(input[i]);
// }

// return (c.size()==n);
// }
struct ok{
 string first;
 string second;
 bool third;
};
void solve()
{
  int n;
  cin>>n;
  int copy=n;
    set<string>diff;
    vector<ok>input;
  set<string>check;
  while(copy--)
  {
    string s;
    cin>>s;
    diff.insert(s);
    input.pb({s,s,false});
    check.insert(s);
  }
  int times=n-diff.size();
  int pos=3;
  cout<<times<<endl;
  for(int i=0;i<input.size();i++)
  {
    string f=input[i].first;
    int st=f[pos]-'0';
    check.insert(f);
    for(int j=i+1;j<n;j++)
    {
      if(f==input[j].first and input[j].third==false)
      {
        show(input[j].first);
        st++;
         st%=10;
        string change=input[j].first;
        change[pos]=st+'0';
        while(check.find(change)!=check.end())
        {
          st++;
         st%=10;
        change[pos]=st+'0';
        }
        // show(st);
        // show(change);
        check.insert(change);
        input[j].second=change;
        input[j].third=true;
      }

    }

  }

for(int i=0;i<n;i++)
{
  cout<<input[i].second<<endl;
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
