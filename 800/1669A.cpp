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
        int n;
        cin>>n;
        if(1900<=n)
        {
            cout<<"Division 1";
        }
        else if(1600<=n && n<=1899)
        {
            cout<<"Division 2";
        }
        else if(1400<=n && n<=1599)
        {
            cout<<"Division 3";
        }
        else
        {
            cout<<"Division 4";
        }
        cout<<endl;
    }
    return 0;
}