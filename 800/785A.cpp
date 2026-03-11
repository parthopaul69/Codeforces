#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    string s;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        if(s.find("Tetrahedron")!=string::npos)
        {
            count+=4;
        }
        else if(s.find("Cube")!=string::npos)
        {
            count+=6;
        }
        else if(s.find("Octahedron")!=string::npos)
        {
            count+=8;
        }
        else if(s.find("Dodecahedron")!=string::npos)
        {
            count+=12;
        }
        else
        {
            count+=20;
        }
        n--;
    }
    cout<<count;
    return 0;
}