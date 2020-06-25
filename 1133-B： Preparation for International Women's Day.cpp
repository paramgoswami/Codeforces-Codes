//https://codeforces.com/contest/1133/problem/B

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
  ll n,k,t;
  cin>>n>>k;
  v64 a(k);
  for(ll i=0;i<n;i++)
  {
    cin>>t;
    a[t%k]++;
  }
  //for(ll i=0;i<k;i++)cout<<a[i]<<" ";
  //cout<<ln;
  ll ans=0;
  ans+=a[0]/2;
  if(k%2==1)
  {
    for(ll i=1;i<(k+1)/2;i++)ans+=min(a[i],a[k-i]);
    cout<<ans*2<<ln;
  }
  else
  {
    for(ll i=1;i<(k+1)/2;i++)ans+=min(a[i],a[k-i]);
    ans+=a[k/2]/2;
    cout<<ans*2<<ln;
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