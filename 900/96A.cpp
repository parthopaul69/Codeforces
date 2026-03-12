#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int max=0;
    cin>>s;
    vector<char>v(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        int count=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(v[i]==v[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(max<count)
        {
            max=count;
        }
    }
    if(max>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}