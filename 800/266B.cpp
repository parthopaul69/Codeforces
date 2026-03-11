#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector<char>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(t!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(v[i]=='B' && v[i+1]=='G')
            {
                v[i]='G';
                v[i+1]='B';
                i++;
            }
        }
        t--;
    }
    for(char c:v)
    {
        cout<<c;
    }
    return 0;
}