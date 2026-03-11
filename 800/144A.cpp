#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,max=0,min=0,count=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[max]<v[i])
        {
            max=i;
        }
        if(v[min]>=v[i])
        {
            min=i;
        }
    }
    count=max+(n-1-min);
    if(max>min)
    {
        count--;
    }
    cout<<count;
    return 0;
}