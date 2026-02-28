#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n,m;
    cin>>n>>m;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]==m[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
    return 0;
}