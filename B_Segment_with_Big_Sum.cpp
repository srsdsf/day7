#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long sum=0;
    int l=0,r=0,ans=0;
    while(r < n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            ans=min(ans,r-l+1);

        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';

}