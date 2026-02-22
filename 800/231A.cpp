#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
}