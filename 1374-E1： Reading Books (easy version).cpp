//https://codeforces.com/contest/1374/problem/E1

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
  ll n,k;
  cin>>n>>k;
  ll t[n],a[n],b[n];
  v64 alice,bob,both;
  for(ll i=0;i<n;i++)
  {
    cin>>t[i]>>a[i]>>b[i];
    if((a[i]==1)&&(b[i]==1))both.pb(t[i]);
    else if(a[i]==1)alice.pb(t[i]);
    else if(b[i]==1)bob.pb(t[i]);
  }
  ll size1=both.size(),size2=min(alice.size(),bob.size());
  if(k>(size1+size2))cout<<"-1"<<ln;
  else
  {
    ll ans=INF;
    sort(all(both));
    sort(all(alice));
    sort(all(bob));
    v64 v;
    for(ll i=0;i<size2;i++)v.pb(alice[i]+bob[i]);
    v64 sum1,sum2;
    sum1.pb(0),sum2.pb(0);
    for(ll i=0;i<size1;i++)
    {
      sum1.pb(sum1[i]+both[i]);
    }
    for(ll i=0;i<v.size();i++)
    {
      sum2.pb(sum2[i]+v[i]);
    }
    ll rem,size=sum2.size();
    for(ll i=0;i<sum1.size();i++)
    {
      rem=k-i;
      if((rem<size)&&(rem>=0))ans=min(ans,sum1[i]+sum2[rem]);
    }
    cout<<ans<<ln;
  }
}

int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}