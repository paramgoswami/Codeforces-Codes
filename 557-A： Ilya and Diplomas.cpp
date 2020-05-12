//https://codeforces.com/contest/557/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n;
  cin>>n;
  int min[3],max[3];
  cin>>min[0]>>max[0];
  cin>>min[1]>>max[1];
  cin>>min[2]>>max[2];
  for(int i=max[0];i>=min[0];i--)
  {
    int rem=n-i;
    if(rem<min[1]+min[2])continue;
    for(int j=max[1];j>=min[1];j--)
    {
      int rem2=rem-j;
      //cout<<i<<" "<<j<<endl;
      if((rem2<=max[2])&&(rem2>=min[2]))
      {
        cout<<i<<" "<<j<<" "<<rem2;
        return 0;
      }
    }
  }
}