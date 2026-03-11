#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b+c || b==a+c || c==a+b)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}