//https://codeforces.com/contest/1385/problem/D

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#include <string.h>
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
#define N 131073

int f(string &s,int n,int l,int r,vector<char> &v,int c)
{
  if(r-l==2)
  {
    if(s[l]==v[c]&&s[l+1]==v[c+1])return 0;
    else if(s[l+1]==v[c]&&s[l]==v[c+1])return 0;
    else if(s[l]==v[c]||s[l]==v[c+1])return 1;
    else if(s[l+1]==v[c]||s[l+1]==v[c+1])return 1;
    else return 2;
  }
  else if(r-l==1)
  {
    if(s[l]==v[c])return 0;
    else return 1;
  }
  else
  {
    int mid=(l+r)/2;
    int v1=0,v2=0;
    for(int i=l;i<mid;i++){if(s[i]!=v[c])v1++;if(s[i+mid-l]!=v[c])v2++;}
    return min(v1+f(s,n,mid,r,v,c+1),v2+f(s,n,l,mid,v,c+1));
  }
}

void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<char> v(26);
  for(int i=0;i<26;i++)v[i]='a'+i;
  cout<<f(s,n,0,n,v,0)<<ln;
}
 
int  main()
{
  fast_cin();
  ll t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}