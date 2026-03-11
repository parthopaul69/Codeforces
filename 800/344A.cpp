#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=1,i,j;
    cin>>n;
    cin>>i;
    for(int k=2;k<=n;k++)
    {
        cin>>j;
        if(i!=j)
        {
            count++;
        }
        i=j;
    }
    cout<<count;
    return 0;
}