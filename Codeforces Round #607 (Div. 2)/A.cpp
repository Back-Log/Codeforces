/**
*     Time is the most valuable thing a man can spend. – Theophrastus.
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  string po[]={"po","o"};
  string desu[]={"u","su","esu","desu"};
  string last[]={"a","da","ida","nida","mnida"};
  string s;
  cin>>s;
  int n=s.size();
  //for po
  for(auto i:po)
  {
    string str=s.substr((n)-i.size(),n-1);
    // cout<<str<<" ";                                                                                        
    if(str==i)
    {
      cout<<"FILIPINO"<<endl;
      return;
    }
  }
   for(auto i:desu)
  {
    string str=s.substr((n)-i.size(),n-1);
    if(str==i)
    {
      cout<<"JAPANESE"<<endl;
      return;
    }
  }
  for(auto i:last)
  {
    string str=s.substr((n)-i.size(),n-1);
    if(str==i)
    {
      cout<<"KOREAN"<<endl;
      return;
    }
  }
 
return;


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
