//https://codeforces.com/contest/1213/problem/C

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

ll func(ll m)
{
  ll ans=0;
  for(int i=1;i<=10;i++)ans+=(i*m)%10;
  return ans;
}

void solve()
{
  ll m,n,ans=0;
  cin>>n>>m;
  if(n==m)cout<<n%10<<ln;
  else if(m>n)cout<<0<<ln;
  else
  {
    ll pages=n/m;
    ll tens=pages/10,rem=pages%10;
    ans+=tens*func(m);
    for(int i=1;i<=rem;i++)ans+=(i*m)%10;
    cout<<ans<<ln;
  }
}

int main()
{
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}