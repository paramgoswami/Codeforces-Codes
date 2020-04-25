//https://codeforces.com/contest/433/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  int x=0,y=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==100)x++;
    else y++;
  }
  int z=x+2*y;
  if(x%2==1)cout<<"NO"<<endl;
  else
  {
    if(x>=2) cout<<"YES"<<endl;
    else
    {
      if(y%2==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
}