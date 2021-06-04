  /**
  *     All limitations are self-imposed. – Oliver Wendell Holmes
  **/

  #include<bits/stdc++.h>
  using namespace std;
  #define int long long
  #define pb push_back
  const int N=2e5+1000;
  vector<int>g[N];
  vector<bool>vis(N);
  void dfs(int src)
  {
    vis[src]=true;
    for(auto child:g[src])
    {
      if(!vis[child])
      {
        dfs(child);   
      }
    }


  }


  void solve()
  {
    int n;
    cin>>n;
    int copy=n;
   for(int i=0;i<n;i++)
   {
     string s;
     cin>>s;
     for(auto c:s)
     {
      g[i].pb(n+c-'a');
      g[n+c-'a'].pb(i);
     }


   }
   int ans=0;
   for(int i=n;i<n+26;i++)
   {
    if(!vis[i] and !g[i].empty())
    {
      dfs(i);
      ans++;
    }
   }

  cout<<ans<<endl;


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
