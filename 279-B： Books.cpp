//https://codeforces.com/contest/279/problem/B

    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        long long int n,t;
        cin>>n>>t;
        long long int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int i=0,j=0,ans=-1e9;
        long long int sum=0;
        while(j<n)
        {
            while((sum+a[j]<=t)&&(j<n))
            {
                sum+=a[j];
                j++;
            }
            //cout<<sum<<" "<<i<<" "<<j<<endl;
            ans=max(ans,j-i);
            sum-=a[i];
            i++;
        }
        cout<<ans<<endl;
    }