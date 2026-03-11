#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m1=min(((k*l)/nl),(c*d));
    int m=min(m1,(p/np));
    cout<<m/n;
    return 0;
}