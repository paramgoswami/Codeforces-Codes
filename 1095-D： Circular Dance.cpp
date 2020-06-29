//https://codeforces.com/contest/1095/problem/D

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
  int n,a,b;
  cin>>n;
  vp32 v(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>a>>b;
    v[i]={a,b};
  }
  if(n==3)cout<<"1 2 3\n";
  else
  {
    v32 ans;
    ans.pb(1);
    int li=1,ct=1;
    set<int> s;
    s.insert(1);
    while(ct<n)
    {
      int val1=v[li].first,val2=v[li].second;
      int val11=v[val1].first,val12=v[val1].second;
      int val21=v[val2].first,val22=v[val2].second;
      //cout<<" val1= "<<val1<<" val2= "<<val2<<" val11= "<<val11<<" val12= "<<val12<<" val21= "<<val21<<" val22= "<<val22;
      if(s.count(val1)==1)
      {
        //cout<<" a  ";
        ans.pb(val2);
        ct++;
        li=val2;
        s.insert(val2);
      }
      else if(s.count(val2)==1)
      {
        //cout<<" b ";
        ans.pb(val1);
        ct++;
        li=val1;
        s.insert(val1);
      }
      else
      {

        if((val11==val2)||(val12==val2))
        {
          //cout<<" c ";
          ans.pb(val1);
          ct++;
          li=val1;
          s.insert(val1);
        }
        else
        {
          //cout<<" d ";
          ans.pb(val2);ct++;li=val2;s.insert(val2);
        }
      }
      //cout<<ln;
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
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