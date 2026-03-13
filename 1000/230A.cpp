#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        if(s<=it.first)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            s+=it.second;
        }
    }
    cout<<"YES";
    return 0;
}