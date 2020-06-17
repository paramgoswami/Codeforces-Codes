//https://codeforces.com/contest/999/problem/B

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
  string s;
  cin>>n;
  cin>>s;
  string t(n,'-');
  v32 v;
  int x=0,j=n-1,start=0,end=n-1;
  for(int i=n;i>=1;i--)if(n%i==0)v.pb(i);
  for(int i=0;i<v.size()-1;i++)
  {
    int diff=v[i]-v[i+1];
    if(x==0)
    {
      for(int k=0;k<diff;k++)t[start++]=s[j--];
    }
    else
    {
      for(int k=0;k<diff;k++)t[end--]=s[j--];
    }
    x=1-x;
  }
  t[start]=s[j];
  cout<<t<<ln;
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}