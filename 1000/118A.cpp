#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1;
    cin>>s1;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    string s2="",s3=".";
    for(char c:s1)
    {
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y')
        {
            s2+=s3+c;
        }
    }
    cout<<s2;
    return 0;
}