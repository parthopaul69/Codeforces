#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,countA=0,countD=0;
    string s;
    cin>>n>>s;
    for(char c:s)
    {
        if(c=='A')
        {
            countA++;
        }
        if(c=='D')
        {
            countD++;
        }
    }
    if(countA>countD)
    {
        cout<<"Anton";
    }
    else if(countD>countA)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}