//https://codeforces.com/contest/508/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
\
void func()
{
  int n,m,k;
  cin>>n>>m>>k;
  vector<vector<bool> >v(n+2,vector<bool>(m+2,false));
  bool ok=false;
  int ans=0;
  for(int i=0;i<k;i++)
  {
    int a,b;
    cin>>a>>b;
    v[a][b]=true;
    if(ok==false)
    {
      for(int j=-1;j<=1;j+=2)
      {
        if(ok==false)
        {
          for(int k=-1;k<=1;k+=2)
          {
            if((((v[a+j][b])&&(v[a+j][b+k])&&(v[a][b+k]))==true)&&(ok==false))ok=true,ans=1+i;
          }
        }
      }
    }
  }
  cout<<ans<<endl;
}
int main() 
{
  func();
}