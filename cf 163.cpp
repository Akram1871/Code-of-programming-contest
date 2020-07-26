#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    int len = s.size();
    while(t--)
    {
        for(int i=1; i<len; i++)
        {
            if(s[i-1]=='B'&&s[i]=='G')
            { //cout<<"Before\n"<<"s[i] = "<<s[i]<<"s[i-1]= "<<s[i-1]<<endl;
                swap(s[i-1],s[i]);
              //cout<<"After\n"<<"s[i] = "<<s[i]<<"s[i-1]= "<<s[i-1]<<endl;
                i++;
            }

        }
    }
    cout<<s<<endl;
}
