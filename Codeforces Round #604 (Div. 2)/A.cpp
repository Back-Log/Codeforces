/**
*     All limitations are self-imposed. – Oliver Wendell Holmes
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  string s;
  cin>>s;
  auto can=[&](char c){





  };
char arr[]={'a','b','c'};
for(int i=0;i<s.size();i++)
{
  if(i==0 and s[i]=='?')
  {
    char check=s[i+1];
    if(check=='?')
    {
      s[i]='a';
    }
    else
    {
     for(auto c:arr)
     {
      if(c!=check)
      {
        s[i]=c;
        break;
      }
     }


    }
  }
  else if(i==s.size()-1 and s[i]=='?')
  {

char check=s[i-1];
    if(check=='?')
    {
      s[i]='a';
    }
    else
    {
     for(auto c:arr)
     {
      if(c!=check)
      {
        s[i]=c;
        break;
      }
     }


    }



  }
  else if(s[i]=='?')
  {
   char prev=s[i-1];
   char next=s[i+1];
   if(next=='?')
   {
      for(auto c:arr)
     {
      if(c!=prev)
      {
        s[i]=c;
        break;
      }
     }
   }
   else
   {
      for(auto c:arr)
     {
      if(c!=prev and c!=next)
      {
        s[i]=c;
        break;
      }
     }



   }







  }

}
bool ok=true;
for(int i=0;i<s.size()-1;i++)
{
  if(s[i]==s[i+1]) ok=false;
}
cout<<(ok?s:"-1")<<endl;

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
