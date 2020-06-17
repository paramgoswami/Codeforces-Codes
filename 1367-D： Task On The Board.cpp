//https://codeforces.com/contest/1367/problem/D

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

char f(vector<int> &b,string &t,int m,vector<int> v,char c)
{
  char d;
  int z=0;
  for(int i=0;i<m;i++)
  {
    if((b[i]==0)&&(t[i]=='-'))z++;
  }
  if(z==0)return '*';
  else
  {
    int j=c-'a'-1;
    while(v[j]<z)j--;
    d='a'+j;
  }
  vector<int> x;
  for(int i=0;i<m;i++)
  {
    if((b[i]==0)&&(t[i]=='-'))
    {
      t[i]=d;
      x.pb(i);
    }
  }
  for(int i=0;i<m;i++)
  {
    if(b[i]!=0)
    {
      for(int val:x)b[i]-=abs(i-val);
    }
  }
  char ch=f(b,t,m,v,d);
  if(ch=='*')return '*';
  return -1;
}

void solve()
{
  string s;
  cin>>s;
  int n=s.length();
  v32 v(26);
  int m;
  cin>>m;
  vector<int> b(m);
  int z=0;
  for(int i=0;i<m;i++){cin>>b[i];if(b[i]==0)z++;}
  for(int i=0;i<n;i++)v[s[i]-'a']++;
  char c;
  for(int i=0;i<26;i++)
  {
    if(v[i]>=z)c='a'+i;
  }
  string t(m,'-');
  vector<int> ind;
  for(int i=0;i<m;i++)
  {
    if(b[i]==0){t[i]=c;ind.pb(i);}
  }
  for(int i=0;i<m;i++)
  {
    if(b[i]!=0)
    {
      for(int x:ind)b[i]-=abs(i-x);
    }
  }
  char ch=f(b,t,m,v,c);
  if(ch==-1)cout<<"-1"<<ln;
  for(int i=0;i<m;i++)cout<<t[i];
  cout<<ln;
}

int main()
{
  fast_cin();
  int t=1;
  cin>>t;
  while(t--)solve();
  return 0;
}