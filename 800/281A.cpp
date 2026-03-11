#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<char>v(s.begin(),s.end());
    v[0]=toupper((unsigned char)v[0]);
    for(char vec:v)
    {
        cout<<vec;
    }
    return 0;
}