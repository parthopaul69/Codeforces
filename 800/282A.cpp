#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if(x.find("++")!=string::npos)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout<<count;
    return 0;
}