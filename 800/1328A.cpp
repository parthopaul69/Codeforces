#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<pair<int,int>>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i].first>>v[i].second;
        if(v[i].first%v[i].second==0)
        {
            cout<<v[i].first%v[i].second<<endl;
        }
        else
        {
            cout<<v[i].second-(v[i].first%v[i].second)<<endl;
        }
    }
    return 0;
}