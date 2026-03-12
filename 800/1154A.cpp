#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int c=v[3]-v[0];
    cout<<c<<" "<<v[1]-c<<" "<<v[2]-c;
    return 0;
}