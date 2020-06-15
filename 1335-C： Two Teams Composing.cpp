//https://codeforces.com/contest/1335/problem/C

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

void solve()
{
  int n;
  cin>>n;
  map<int,int> x;
  int max_size=-1,total_dist=0,dist;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;x[a]++;
  }
  for(auto it:x)
  {
    max_size=max(max_size,it.second);
    total_dist++;
  }
  for(int i=max_size;i>=0;i--)
  {
    if(i==max_size)dist=total_dist-1;
    else dist=total_dist;
    if(dist>=i)
    {
      cout<<i<<ln;
      return;
    }
  }
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