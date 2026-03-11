#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w,count=0;
    cin>>k>>n>>w;
    while(w!=0)
    {
        count=count+w*k;
        w--;
    }
    if(count>n)
    {
        cout<<count-n;
    }
    else
    {
        cout<<0;
    }
    return 0;
}