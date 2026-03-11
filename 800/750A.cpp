#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,count=0;
    cin>>n>>k;
    int t=240-k;
    for(int i=1;i<=n;i++)
    {
        if(t>=i*5)
        {
            count++;
            t-=i*5;
        }
        else
        {
            break;
        }
    }
    cout<<count;
    return 0;
}