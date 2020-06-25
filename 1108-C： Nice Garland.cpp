//https://codeforces.com/contest/1108/problem/C

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
  ll n;
  cin>>n;
  string s="",a="",ans="";
  ll mat[3][3];
  for(int i=0;i<3;i++)for(int j=0;j<3;j++)mat[i][j]=0;
  cin>>s;
  /*for(int i=0;i<3;i++)
  {
    for(int j=i;j<n;j+=3)
    {
      if(s[j]=='R')mat[0][i]++;
      else if(s[j]=='G')mat[1][i]++;
      else mat[2][i]++;
    }
  }
  int val1=mat[0][0]+mat[1][1]+mat[2][2];
  int val2=mat[0][0]+mat[1][2]+mat[2][1];
  int val3=mat[0][1]+mat[1][0]+mat[2][2];
  int val4=mat[0][1]+mat[1][2]+mat[2][0];
  int val5=mat[0][2]+mat[1][1]+mat[2][0];
  int val6=mat[0][2]+mat[1][0]+mat[2][1];
  int m=max(max(max(val1,val2),val3),max(max(val4,val5),val6));
  if(m==val1)a="RGB";
  else if(m==val2)a="RBG";
  else if(m==val3)a="GRB";
  else if(m==val4)a="GBR";
  else if(m==val5)a="BGR";
  else if(m==val6)a="BRG";
  for(int i=0;i<n;i++)ans+=a[i%3];
  int ct=0;
  for(int i=0;i<n;i++)if(s[i]!=ans[i])ct++;
  cout<<ct<<ln<<ans<<ln;*/
  string x[]={"RGB","RBG","GRB","GBR","BGR","BRG"};
  v32 v(6);
  for(int i=0;i<6;i++)
  {
    a=x[i];
    for(int j=0;j<n;j++)
    {
      if(a[j%3]!=s[j])v[i]++;
    }
  }
  int m=1e8,ind=-1;
  for(int i=0;i<6;i++)
  {
    if(m>v[i])m=v[i],ind=i;
  }
  a=x[ind];
  cout<<v[ind]<<ln;
  for(int i=0;i<n;i++)ans+=a[i%3];
  cout<<ans<<ln;
}

int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}