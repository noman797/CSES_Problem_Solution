#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    long long  n; cin>>n;
    vector<long long>v(n);
    for(long long &x:v) cin>>x;

    long long cnt=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<=v[i-1])
        {
            cnt+=(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }

    cout<<cnt;

    return 0;
}