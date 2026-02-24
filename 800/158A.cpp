#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,count=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>=v[k-1] && v[i]>0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}