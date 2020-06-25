//https://codeforces.com/contest/1141/problem/C

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
  ll n;
  cin>>n;
  ll a[n-1],s[n],m=0;
  s[0]=0;
  for(int i=0;i<n-1;i++)
  {
    cin>>a[i];
    s[i+1]=s[i]+a[i];
    m=min(m,s[i+1]);
  }
  ll val_added=1-m;
  set<ll>x;
  ll ans[n];
  for(int i=0;i<n;i++)
  {
    ll p=s[i]+val_added;
    if(p<1||p>n)
    {
      cout<<"-1\n";return;
    }
    x.insert(p);
    ans[i]=p;
  } 
  if(x.size()==n)
  {
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
  }
  else cout<<"-1";
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}