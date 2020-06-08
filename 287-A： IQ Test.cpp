//https://codeforces.com/contest/287/problem/A

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
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

bool f(vector<vector<char> >v,int i,int j)
{
  //LEFT TOP
  int black=0,white=0;
  if(v[i-1][j]=='#')black++;
  if(v[i-1][j]=='.')white++;
  if(v[i-1][j-1]=='#')black++;
  if(v[i-1][j-1]=='.')white++;
  if(v[i][j]=='#')black++;
  if(v[i][j]=='.')white++;
  if(v[i][j-1]=='#')black++;
  if(v[i][j-1]=='.')white++;
  if(black>=3 || white>=3)return true;

  //RIGHT TOP
  black=0,white=0;
  if(v[i+1][j]=='#')black++;
  if(v[i+1][j]=='.')white++;
  if(v[i+1][j-1]=='#')black++;
  if(v[i+1][j-1]=='.')white++;
  if(v[i][j]=='#')black++;
  if(v[i][j]=='.')white++;
  if(v[i][j-1]=='#')black++;
  if(v[i][j-1]=='.')white++;
  if(black>=3 || white>=3)return true;

  //RIGHT BOTTOM
  black=0,white=0;
  if(v[i+1][j]=='#')black++;
  if(v[i+1][j]=='.')white++;
  if(v[i+1][j+1]=='#')black++;
  if(v[i+1][j+1]=='.')white++;
  if(v[i][j]=='#')black++;
  if(v[i][j]=='.')white++;
  if(v[i][j+1]=='#')black++;
  if(v[i][j+1]=='.')white++;
  if(black>=3 || white>=3)return true;

  //LEFT BOTTOM
  black=0,white=0;
  if(v[i-1][j]=='#')black++;
  if(v[i-1][j]=='.')white++;
  if(v[i-1][j+1]=='#')black++;
  if(v[i-1][j+1]=='.')white++;
  if(v[i][j]=='#')black++;
  if(v[i][j]=='.')white++;
  if(v[i][j+1]=='#')black++;
  if(v[i][j+1]=='.')white++;
  if(black>=3 || white>=3)return true;

  return false;
}

void solve()
{
  vector<vector<char> >v(6,vector<char>(6,'-'));
  for(int i=1;i<=4;i++)
  {
    for(int j=1;j<=4;j++)cin>>v[i][j];
  }
  for(int i=1;i<=4;i++)
  {
    for(int j=1;j<=4;j++)
    {
      if(f(v,i,j)==true)
      {
        cout<<"YES"<<ln;
        return;
      }
    }
  }
  cout<<"NO";
}

int main() {
  fast_cin();
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
}