#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin>>n>>m>>s;
    int len = s.size();
    while(m--)
    for(int i=1;i<n;i++)
    {
        if(s[i]=='G' && s[i-1]=='B'){
             swap(s[i],s[i-1]);
             i++;
        }

    }
    cout<<s<<endl;
}
