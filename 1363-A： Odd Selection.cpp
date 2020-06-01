//https://codeforces.com/contest/1363/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,x;
  cin>>n>>x;
  int odds=0,evens=0,temp;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    if(temp%2==0)evens++;
    else odds++;
  }
  for(int i=1;i<=odds;i+=2)
  {
    int y=x-i;
    if((y>=0)&&(y<=evens))
    {
      cout<<"Yes\n";
      return;
    }
  }
  cout<<"No\n";

}

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    func();
  }
}