//https://codeforces.com/contest/108/problem/A

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

void print(int x,int y)
{
  if(x/10==0)cout<<"0"<<x<<":";
  else cout<<x<<":";
  if(y/10==0)cout<<"0"<<y;
  else cout<<y;
}

int main() 
{
  fast_cin();
  int a,b;
  string s;
  cin>>s;
  a=(s[0]-'0')*10+s[1]-'0';
  b=(s[3]-'0')*10+s[4]-'0';
  int x,y,temp=(a%10)*10+a/10;
  //cout<<a<<" "<<b<<" "<<temp<<ln;
  if((a%10>=6)||((a%10==5)&&(b>=temp)))
  {
    x=(1+a/10)*10;
    y=(x%10)*10+x/10;
    print(x,y);
  }
  else if(b>=temp)
  {
    if(a==23)cout<<"00:00"<<endl;
    else
    {
      x=1+a;
      y=(x%10)*10+x/10;
      print(x,y);
    }
  }
  else
  {
    x=a;
    y=(x%10)*10+x/10;
    print(x,y);
  }
  return 0;
}