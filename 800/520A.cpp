#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin>>n>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    set<char>st(s.begin(),s.end());
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