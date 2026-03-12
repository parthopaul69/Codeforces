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
        int n,out=0;
        cin>>n;
        while(n!=0)
        {
            out+=n%10;
            n/=10;
        }
        cout<<out<<endl;
    }
    return 0;
}