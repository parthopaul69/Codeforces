#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,r,count=1;
    cin>>k>>r;
    for(int i=1;(k*i)%10!=0 && (k*i)%10!=r;i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}