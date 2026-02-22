#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n!=0)
    {
        string s;
        cin>>s;
        int x=s.length();
        if(x>10)
        {
            cout<<s[0]<<x-2<<s[x-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        n--;
    }
    return 0;
}