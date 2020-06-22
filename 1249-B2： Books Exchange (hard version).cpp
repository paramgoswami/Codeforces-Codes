//https://codeforces.com/contest/1249/problem/B2

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
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
  int n;
  cin>>n;
  int a[n+1],b[n+1];
  bool x[n+1];
  memset(x,false,sizeof(x));
  for(int i=1;i<=n;i++)cin>>a[i];
  for(int j=1;j<=n;j++)
  {
    if(x[j]==false)
    {
      vector<int> curr;
      while(!x[j])
      {
        curr.pb(j);
        x[j]=true;
        j=a[j];
      }
      for(auto el:curr)b[el]=curr.size();
    }
  }
  for(int j=1;j<=n;j++)cout<<b[j]<<" ";
  cout<<ln;  
}

int main()
{
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}