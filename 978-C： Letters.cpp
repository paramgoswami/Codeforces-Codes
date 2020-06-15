//https://codeforces.com/contest/978/problem/C

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

ll func(ll sum[],ll n,ll a)
{
  ll l=1,h=n;
  if(a<=sum[1])return 0;
  else if(a>=sum[n-1])return n-1;
  else
  {
    while(l<=h)
    {
      ll m=(l+h)/2;
      if((sum[m]<a)&&(sum[m+1]>a)) return m;
      else if(sum[m]>a) h=m;
      else l=m;
    }
    return -1;  
  }
}

void solve()
{
  ll n,m;
  cin>>n>>m;
  ll a[n+1],sum[n+1];
  map<ll,ll> x;
  for(ll i=1;i<=n;i++)
  {
    cin>>a[i];
    if(i==1)sum[i]=a[i];
    else sum[i]=sum[i-1]+a[i];
    x[sum[i]]=i;
  }
  for(ll i=0;i<m;i++)
  {
    ll b,y;
    cin>>b;
    if(x.count(b)!=0)
    {
      cout<<x[b]<<" "<<a[x[b]]<<ln;
      continue;
    }
    y=func(sum,n,b);
    if(y==0)cout<<1<<" "<<b<<ln;
    else cout<<y+1<<" "<<b-sum[y]<<ln;
  }
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}