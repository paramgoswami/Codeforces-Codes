//https://codeforces.com/contest/121/problem/A

#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long maxx = 1e10;
void luck(long long t){
if(t>maxx)
    return;
    v.push_back(t);
luck(t*10+4);
luck(t*10+7);

}
int main(){
int l,r;
long long c1=0;
cin>>l>>r;
luck(0);
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    while(l<=r&&l<=v[i]){
        c1+=v[i];
        ++l;
    }
}
cout<<c1;
}