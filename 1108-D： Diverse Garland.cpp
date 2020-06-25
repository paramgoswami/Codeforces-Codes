//https://codeforces.com/contest/1108/problem/D

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
  int n;
  cin>>n;
  string a;
  cin>>a;
  v32 v;
  int ct=0,i=0;
  while(i<n-1)
  {
    if(a[i]==a[i+1])
    {
      ct++;
      v.pb(i+1);
      i+=2;
    }
    else i++;
  }
  cout<<ct<<ln;
  char c[]={'R','G','B'};
  string s=a;
  for(int i=0;i<v.size();i++)
  {
    int val=v[i];
    if(val==n-1)
    {
      if(s[n-2]=='R')s[n-1]='G';
      else s[n-1]='R';
    }
    else
    {
      char c1=s[val-1],c2=s[val+1];
      if(c1==c2)
      {
        if(c1=='R')s[val]='B';
        else s[val]='R';
      }
      else
      {
        if((c1=='R')&&(c2=='B'))s[val]='G';
        if((c1=='R')&&(c2=='G'))s[val]='B';
        if((c1=='B')&&(c2=='G'))s[val]='R';
        if((c1=='B')&&(c2=='R'))s[val]='G';
        if((c1=='G')&&(c2=='B'))s[val]='R';
        if((c1=='G')&&(c2=='R'))s[val]='B';
      }
    }
  }
  cout<<s<<ln;
}

int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}