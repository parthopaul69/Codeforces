#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]==c[i-1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}