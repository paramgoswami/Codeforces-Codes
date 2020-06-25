//https://codeforces.com/contest/1154/problem/C

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
  int a,b,c;
  cin>>a>>b>>c;
  int weeks=min(min(a/3,b/2),c/2);
  int days=0;
  a-=weeks*3;
  b-=weeks*2;
  c-=weeks*2;
  int start;
  for(start=0;start<7;start++)
  {
    int days_go_through=0,ct=0;
    int p=a,q=b,r=c;   
    for(int day=0;(day<7)&&(ct==0);day++)
    {
      int weekday=(day+start)%7;
      int x=-1;
      if((weekday==0)||(weekday==3)||(weekday==6))x=1;
      else if((weekday==1)||(weekday==5))x=2;
      else x=3;
      //cout<<day<<" "<<weekday<<" "<<x<<ln;
      if(x==1)
      {
        if(p>0)
        {
          p--;days_go_through++;
        }
        else ct=1;
      }
      else if(x==2)
      {
        if(q>0)
        {
          q--;
          days_go_through++;
        }
        else ct=1;
      }
      else if(r>0)r--,days_go_through++;
      else ct=1;
    }
    days=max(days,days_go_through);
  }
  cout<<days+weeks*7;
}

int main()
{
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)solve();
  return 0;
}