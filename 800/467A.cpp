#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        if(v[i].first!=v[i].second && v[i].first+1!=v[i].second)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}