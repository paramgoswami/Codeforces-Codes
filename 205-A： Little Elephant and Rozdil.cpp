//https://codeforces.com/contest/205/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  long long int a[n],min=10000000001;
  map<long long int,int> x;
  int ind=-1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    x[a[i]]++;
    if(min>a[i]){
      min=a[i];
      ind=i;
    }
  }
  if(x[min]==1)cout<<ind+1<<endl;
  else cout<<"Still Rozdil"<<endl;
}