#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>e;
    vector<int>o;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
        {
            e.push_back(i);
        }
        else
        {
            o.push_back(i);
        }
    }
    if(e.size()>o.size())
    {
        cout<<o[0];
    }
    else
    {
        cout<<e[0];
    }
    return 0;
}