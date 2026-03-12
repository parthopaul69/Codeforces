#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,max=0;
    cin>>a>>b>>c;
    vector<int>v;
    int t=a+b+c;
    int w=a+b*c;
    int x=a*(b+c);
    int y=a*b*c;
    int z=(a+b)*c;
    v.push_back(t);
    v.push_back(w);
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    for(int p:v)
    {
        if(p>max)
        {
            max=p;
        }
    }
    cout<<max;
    return 0;
}