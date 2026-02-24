#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(char c:s)
    {
        if(isupper(c))
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    else if(count1>count2)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    return 0;
}