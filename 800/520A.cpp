#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin>>n>>s;
    set<char>st;
    for(char c:s)
    {
        c=tolower(c);
        st.insert(c);
    }
    if(st.size()==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}