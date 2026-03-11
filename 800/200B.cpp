#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    double sum=0,m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
    }
    cout<<sum/n;
    return 0;
}