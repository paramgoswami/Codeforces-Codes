//https://codeforces.com/contest/448/problem/A

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
  int a1,a2,a3,b1,b2,b3,s1,s2,n1,n2,n;
  cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
  s1=a1+a2+a3,s2=b1+b2+b3;
  //cout<<s1<<" "<<s2<<ln;
  n1=(s1%5==0)?s1/5:1+s1/5;
  n2=(s2%10==0)?s2/10:1+s2/10;
  //cout<<n1<<" "<<n2<<" "<<n;
  if((n1+n2)<=n)cout<<"YES\n";
  else cout<<"NO\n";
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}