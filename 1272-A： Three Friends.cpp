//https://codeforces.com/contest/1272/problem/A

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
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

long long int dist(long long int a,long long int b,long long int c)
{
  return abs((a)-(b))+abs((b)-(c))+abs((c)-(a));
}

void solve()
{
  long long int a1,a2,a3,d1,d2,d3,e1,e3,ans=INF;
  cin>>a1>>a2>>a3;
  d1=min(min(a1,a2),a3);
  d3=max(max(a1,a2),a3);
  d2=a1+a2+a3-d1-d3;
  e1=d1+1;
  e3=d3-1;
  ans=min(ans,dist(d1,d2,d3));
  ans=min(ans,dist(e1,d2,d3));
  ans=min(ans,dist(d1,d2,e3));
  ans=min(ans,dist(e1,d2,e3));
  ans=min(ans,dist(d1,d2+1,d3));
  ans=min(ans,dist(e1,d2+1,d3));
  ans=min(ans,dist(d1,d2+1,e3));
  ans=min(ans,dist(e1,d2+1,e3));
  ans=min(ans,dist(d1,d2-1,d3));
  ans=min(ans,dist(e1,d2-1,d3));
  ans=min(ans,dist(d1,d2-1,e3));
  ans=min(ans,dist(e1,d2-1,e3));
  cout<<ans<<ln;
}

int main() {
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
}