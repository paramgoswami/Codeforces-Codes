//https://codeforces.com/contest/1196/problem/D1

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
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  string s1="",s2="",s3="",s4="RGB";
  for(int i=0;i<k;i++)
  {
    s1+=s4[i%3];
    s2+=s4[(i+1)%3];
    s3+=s4[(i+2)%3];
  }
  int ans=1e8;
  for(int i=0;i<n-k+1;i++)
  {
    int ct=0;
    string t=s.substr(i,k);
    for(int j=0;j<k;j++)
    {
      if(t[j]!=s1[j])ct++;
    }
    ans=min(ans,ct);
  }
  for(int i=0;i<n-k+1;i++)
  {
    int ct=0;
    string t=s.substr(i,k);
    for(int j=0;j<k;j++)
    {
      if(t[j]!=s2[j])ct++;
    }
    ans=min(ans,ct);
  }
  for(int i=0;i<n-k+1;i++)
  {
    int ct=0;
    string t=s.substr(i,k);
    for(int j=0;j<k;j++)
    {
      if(t[j]!=s3[j])ct++;
    }
    ans=min(ans,ct);
  }
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