#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(true)
    {
        n++;
        set<int>st;
        int t=n;
        while(t!=0)
        {
            st.insert(t%10);
            t/=10;
        }
        if(st.size()==4)
        {
            cout<<n;
            break;
        }
    }
    return 0;
}