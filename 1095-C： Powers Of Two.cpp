//https://codeforces.com/contest/1095/problem/C

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
  int n,k;
  cin>>n>>k;
  int ct=0;
  int t=n;
  vector<int> v,ans;
  while(t!=0)
  {
    v.pb(t%2);
    if(t%2==1)ct++;
    t/=2;
  }
  if(ct>k)cout<<"NO\n";
  else
  {
    reverse(v.begin(),v.end());
    int i=0;
    while((ct<k)&&(i<v.size()-1))
    {
      if(v[i]==0)i++;
      else
      {
        v[i+1]+=2;
        v[i]--;
        ct++;
      }
    }
    if(ct!=k)cout<<"NO\n";
    else
    {
      for(int i=0;i<v.size();i++)
      {
        for(int j=0;j<v[i];j++)ans.pb(pow(2,v.size()-1-i));
      }
      cout<<"YES\n";
      for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    }
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