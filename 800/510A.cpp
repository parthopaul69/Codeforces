#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    string s1="#",s2=".";
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2==0)
            {
                if((i/2)%2==0)
                {
                    if(j==1)
                    {
                        cout<<s1;
                    }
                    else
                    {
                        cout<<s2;
                    }
                }
                else
                {
                    if(j==m)
                    {
                        cout<<s1;
                    }
                    else
                    {
                        cout<<s2;
                    }
                }
            }
            else
            {
                cout<<s1;
            }
        }
        cout<<endl;
    }
    return 0;
}