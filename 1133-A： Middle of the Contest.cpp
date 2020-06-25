//https://codeforces.com/contest/1133/problem/A

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
  string s1,s2;
  int h1,h2,m1,m2,t1,t2,t;
  cin>>s1>>s2;
  int h10=s1[0]-'0';
  int h11=s1[1]-'0';
  int m10=s1[3]-'0';
  int m11=s1[4]-'0';
  int h20=s2[0]-'0';
  int h21=s2[1]-'0';
  int m20=s2[3]-'0';
  int m21=s2[4]-'0';
  h1=(h10*10+h11);
  m1=(m10*10+m11);
  h2=(h20*10+h21);
  m2=(m20*10+m21);
  t1=h1*60+m1;
  t2=h2*60+m2;
  if(t2>t1)t=(t1+t2)/2;
  else t=(t1+t2+1440)/2;
  t=t%1440;
  int h=t/60,m=t%60;
  if(h%10==h)cout<<0;
  cout<<h<<":";
  if(m%10==m)cout<<0;
  cout<<m<<ln;
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}