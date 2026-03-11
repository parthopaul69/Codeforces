#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,min=0;
    cin>>a>>b>>c;
    vector<int>v{a,b,c};
    sort(v.begin(),v.end());
    cout<<v[2]-v[0];
    return 0;
}