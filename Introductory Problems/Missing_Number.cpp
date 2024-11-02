#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n-1);
    for(int &x:a)
    cin>>x;
    sort(a.begin(),a.end());
    int val=1;
    for(int i=0;i<n;i++)
    {
       if(a[i]==val)
       val++;
       else
       break;
       
    }
    cout<<val<<endl;
}