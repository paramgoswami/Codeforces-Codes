//https://codeforces.com/contest/1342/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int x,y,a,b,ans;
    cin>>x>>y;
    cin>>a>>b;
    ans=min(a*(x+y),a*abs(x-y)+b*min(x,y));
    cout<<ans<<endl;
  }
}
    