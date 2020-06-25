//https://codeforces.com/contest/1144/problem/C

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
  int a[n];
  map<int,int> x;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    x[a[i]]++;
  }
  for(auto v:x)
  {
    if(v.second>2)
    {
      cout<<"NO\n";
      return;
    }
  }
  sort(a,a+n);
  v32 v1,v2;
  for(int i=0;i<n;i++)
  {
    if(i==0)v1.pb(a[i]);
    else
    {
      if(a[i]!=a[i-1])v1.pb(a[i]);
      else v2.pb(a[i]);
    }
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end(),greater<int>());
  cout<<"YES\n";
  cout<<v1.size()<<ln;
  for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
  cout<<ln<<v2.size()<<ln;
  for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
  cout<<ln;
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}