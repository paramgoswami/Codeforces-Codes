//https://codeforces.com/contest/1176/problem/B

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
  int div0=0,div1=0,div2=0;
  int a[n],ans=0,temp;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%3==0)div0++;
    else if(a[i]%3==1)div1++;
    else div2++;
  }
  ans+=div0+min(div1,div2);
  temp=min(div1,div2);
  div1-=temp,div2-=temp;
  ans+=div1/3+div2/3;
  cout<<ans<<ln;
}

int main()
{
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}