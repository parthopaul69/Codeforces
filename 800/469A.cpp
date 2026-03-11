#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y;
    cin>>n;
    set<int>s;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        int b;
        cin>>b;
        s.insert(b);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}