#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin>>str;
    set<char> st;
    for(char s:str)
    {
        st.insert(s);
    }
    if(st.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}