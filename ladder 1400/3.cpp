#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    fast;
    map<char,int>mp;
    int a[26],len_s,len_s1,len_s2;
    string s,s1,s2,result;
    cin>>s>>s1>>s2;
    len_s=s.size();
    len_s1=s1.size();
    len_s2=s2.size();
    if((len_s+len_s1)!=len_s2)
    {
        cout<<"NO\n";
        return 0;
    }

    s.append(s1);
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    //cout<<"I am"<<s<<endl<<s2<<endl;
    if(s.compare(s2)==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";





}
