// Time - 2021-05-18 20:45:53

/**
*   Push yourself, because no one else is going to do it for you.
**/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
vector<int>ok;
void solve()
{ 	
   int n;
   cin>>n;

  vector<int>ok(n+1,0);
  iota(ok.begin(),ok.end(),0);

 bool possible=true;

 for(int i=1;i<=n;i++)
 {
 	int a;
 	cin>>a;
 	if(a<i)
 	{
 		possible=false;
 		continue;
 		break;
 	}
 	if(i<a)
 	{
 		swap(ok[a],ok[i]);
 	}
 	
 }
 if(possible)
 {

 	
 	for(auto i=1;i<=n;i++)
 	{
 		cout<<ok[i]<<" ";
 	}
 }
 else
 {
 	cout<<-1;
 }
cout<<endl;
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
