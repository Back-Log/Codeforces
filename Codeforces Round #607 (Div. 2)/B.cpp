  /**
  *     Time is the most valuable thing a man can spend. – Theophrastus.
  **/

  #include<bits/stdc++.h>
  using namespace std;
  #define int long long
  #define pb push_back
  void solve()
  {
    string my,your;
    cin>>my>>your;
    string imp= "---";
     int n;
     n=my.size();
   int f=0;
   if(my<your)
   {
    cout<<my<<endl;
    return;
   }
   string copy=my;
   sort(copy.begin(),copy.end());
     for(int i=0;i<n;i++)
     {
      if(my[i]>copy[i])
      {
      for(int j=i+1;j<n;j++)
      {
        swap(my[i],my[j]);
        if(my<your)
        {
          imp=my;
          f=1;
          break;
        }
        swap(my[i],my[j]);

      }
    }
      if(f)
      {
        break;
      }
     }                                                       
   

  cout<<imp<<endl;

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
