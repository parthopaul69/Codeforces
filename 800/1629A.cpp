#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        vector<int>v;
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        for(int i=0;i<3;i++)
        {
            if(a<v[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}