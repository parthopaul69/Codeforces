#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,max=0,temp=0;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        temp=temp+(v[i].second-v[i].first);
        if(temp>max)
        {
            max=temp;
        }
    }
    cout<<max;
    return 0;
}