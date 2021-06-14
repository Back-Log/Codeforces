// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define pb push_back
// void solve()
// {

//   int n, l, r;
//   cin >> n >> l >> r;
//   int arr[n];
//   int count=0;  
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[i] + arr[j] >= l and arr[i] + arr[j] <= r)
//       {
//         count++;
//       }

//     }
//   }

//   cout << count << endl;

// }
// int32_t main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   int t;
//   t = 1;
//   // cin>>t;
//   while (t--)
//   {
//     solve();
//   }


//   return 0;
// }
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
using namespace std;
// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}

// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
// #define show(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define show(x...)
// #endif

using namespace __gnu_pbds;
/*
Here in the typedef we can change the value of int to any type -> ex-string,double,pair<int,int>....

To use the duplicate element in the set we need to insert the values in the set by pair->like {value,index}

we can also use <greater> or <less_equal> instead of less in required places
*/
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;


int32_t main()
{

// Declairing a Policy based data structure


  /*
  There are two important mathod in PBDS
  1-> find_by_order(k):- returns the itretor to the Kth largest element (index start from 0)
  2-> order_of_key(k):- returns the number of element in the set ,which are strictly less than (k).

  */
  int t;
cin>>t;
  // t = 1;
  while (t--)
  {
    int n, l, r; cin >> n >> l >> r;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }


    PBDS s;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
      ans+=s.order_of_key(r-arr[i]+1)-s.order_of_key(l-arr[i]);
      s.insert(arr[i]);
    }

cout<<ans<<endl;
  }
  return 0;

}