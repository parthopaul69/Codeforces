#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(find(v.begin(),v.end(),1)!=v.end())
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
    return 0;
}