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
        int n,count=1;
        cin>>n;
        vector<int>v;
        while(n!=0)
        {
            int temp=n%10;
            if(temp!=0)
            {
                v.push_back(temp*count);
            }
            count*=10;
            n/=10;
        }
        cout<<v.size()<<"\n";
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}