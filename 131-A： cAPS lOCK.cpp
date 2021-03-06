//https://codeforces.com/contest/131/problem/A

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
  string s,s1;
  cin>>s;
  s1=s;
  string temp=s.substr(1),ans,t1;
  t1=temp;
  transform(s1.begin(),s1.end(),s1.begin(),::toupper);
  transform(t1.begin(),t1.end(),t1.begin(),::toupper);
  if(s1==s)
  {
    ans=s;
    transform(ans.begin(),ans.end(),ans.begin(),::tolower);
  }
  else if(t1==temp)
  {
    transform(t1.begin(),t1.end(),t1.begin(),::tolower);
    char c=s[0]-32;
    ans+=c;
    ans+=t1;
  }
  else ans=s;
  cout<<ans;
}

int  main()
{
  fast_cin();
  ll t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
} 