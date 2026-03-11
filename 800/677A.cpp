#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,h,out=0;
    cin>>n>>h;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<=h)
        {
            out+=1;
        }
        else
        {
            out+=2;
        }
    }
    cout<<out;
    return 0;
}