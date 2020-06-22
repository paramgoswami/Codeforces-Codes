//https://codeforces.com/contest/1196/problem/C

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
  int max_x=1e5,min_x=-1e5,max_t=1e5,min_t=-1e5;
  for(int i=0;i<n;i++)
  {
    int x,y,f1,f2,f3,f4;
    cin>>x>>y>>f1>>f2>>f3>>f4;
    if(f1==0)min_x=max(min_x,x);
    if(f4==0)min_t=max(min_t,y);
    if(f3==0)max_x=min(max_x,x);
    if(f2==0)max_t=min(max_t,y);
  }
  //cout<<min_x<<" "<<max_x<<" "<<min_t<<" "<<max_t<<ln;
  bool xdir=max_x>=min_x,ydir=max_t>=min_t;
  if(xdir&&ydir)
  {
    cout<<1<<" "<<(min_x+max_x)/2<<" "<<(min_t+max_t)/2<<ln;
  }
  else cout<<"0\n";
}

int main()
{
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}