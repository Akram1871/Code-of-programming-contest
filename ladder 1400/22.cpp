#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
    string s,s1;
    cin>>s>>s1;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    if(s.compare(s1)==0)
        cout<<"0\n";
    else if(s.compare(s1)>0)
        cout<<"1\n";
    else
        cout<<"-1\n";

}

