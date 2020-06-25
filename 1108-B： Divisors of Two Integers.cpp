//https://codeforces.com/contest/1108/problem/B

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
ll NUM = 1e9+7;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 1e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define zer ll(0)

void solve()
{
  int n,a,m=-1e8;
  cin>>n;
  v32 v1;
  set<int> s;
  map<int,int> x;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v1.pb(a);
    x[a]++;
    m=max(m,a);
  }
  int ans1=m,ans2=-1;
  for(int i=1;i*i<=m;i++)
  {
    if(m%i==0)
    {
      int val1=i,val2=m/i;
      if(val1!=val2)x[val1]--,x[val2]--;
      else x[val1]--;
    }
  }
  for(auto v:x)
  {
    if(v.second>0)ans2=max(ans2,v.first);
  }
  cout<<ans1<<" "<<ans2<<ln;
}

int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}