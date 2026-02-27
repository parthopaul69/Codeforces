#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,count=0;
    cin>>n;
    while(n!=0)
    {
        if(n>=100)
        {
            count++;
            n-=100;
        }
        else if(n>=20)
        {
            count++;
            n-=20;
        }
        else if(n>=10)
        {
            count++;
            n-=10;
        }
        else if(n>=5)
        {
            count++;
            n-=5;
        }
        else
        {
            count++;
            n--;
        }
    }
    cout<<count;
    return 0;
}