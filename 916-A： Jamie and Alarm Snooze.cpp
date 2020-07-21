//https://codeforces.com/contest/916/problem/A

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

bool check(int t)
{
  int h=t/60,m=t%60;
  if(h/10==7||h%10==7||m%10==7||m/10==7)return true;
  return false;
}

void solve()
{
  int x,h,m;
  cin>>x>>h>>m;
  int ot=h*60+m;
  int y=0,temp=ot-y*x;
  while(1)
  {
    if(temp<0)temp+=1440;
    //cout<<temp<<ln;
    if(check(temp))
    {
      cout<<y<<ln;
      return;
    }
    y++;
    temp-=x;
  }
}
 
int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}