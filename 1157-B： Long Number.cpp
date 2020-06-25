//https://codeforces.com/contest/1157/problem/B

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
  string s,t;
  cin>>s;
  int start=-1,end=-1;
  int f[10];
  for(int i=1;i<=9;i++)cin>>f[i];
  int i=0;
  while((start==-1)&&(i<n))
  {
    int x=s[i]-'0';
    int y=f[x];
    if(y>x)start=i;
    i++;
  }
  if(start==-1){cout<<s<<ln;return;}
  i=start;
  while((end==-1)&&(i<n))
  {
    int x=s[i]-'0';
    int y=f[x];
    if(x>y)end=i;
    i++;
  }
  if(end==-1)
  {
    for(i=0;i<n;i++)
    {
      char c=s[i];
      int x=c-'0';
      char d=f[x]+'0';
      if(i<start)t+=c;
      else t+=d;
    }
  }
  else
  {
    for(i=0;i<n;i++)
    {
      char c=s[i];
      int x=c-'0';
      char d=f[x]+'0';
      if(i<start)t+=c;
      else if(i>=end)t+=c;
      else t+=d;
    }
  }
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