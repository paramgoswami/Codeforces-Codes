//https://codeforces.com/contest/1327/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n,temp;
    cin>>n;
    map<int,int> x;
    vector<vector<int>> vect(n);
    int z,ct=0;
    for(int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      if(k==0)
      {
        z=i+1;
      }
      if(k>0)
      {
        ct=1;
        for(int j=0;j<k;j++)
        {
          cin>>temp;
          vect[i].push_back(temp);
        }
      }
    }
    //cout<<"TEahsz"<<endl;
    if(ct==0)
    {
      cout<<"IMPROVE"<<endl;
      cout<<z<<" "<<n<<endl;
    }
    else{
     int arr[n]; 
      for(int i=0;i<n;i++)
      {
        arr[i]=0;
      }
      for(int i=0;i<n;i++)
      {
      int j=0,count=0;
      while(j<vect[i].size())
      {
        if(x.find(vect[i][j])==x.end()&&count==0)
        {
          x[vect[i][j]]=i;
          arr[i]=vect[i][j];
          count=1;
        }
        j++;
      }
      //if(count==0)ans=i;
    }
    int y=-1;
    for(int i=1;i<=n;i++)
    {
      if(x.find(i)==x.end()){y=i;break;}
    }
    int ans=-1;
    //int arr[x.size()];
    for(int i=0;i<n;i++)
    {
      if(arr[i]==0){ans=i+1;break;}
    }
    if(y!=-1){
      cout<<"IMPROVE"<<endl;
      cout<<ans<<" "<<y<<endl;}
    else{
      cout<<"OPTIMAL"<<endl;
    }
  }}
  //std::cout << "Hello World!\n";
}