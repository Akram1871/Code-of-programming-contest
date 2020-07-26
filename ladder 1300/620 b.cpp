
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    int n,m;
    string s,d;
    vector<string>v;
    vector<string>palindrome,right,left;
    cin>>n>>m;
    int t=n;
    while(n--)
    {
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<t;i++)
    {
       d=v[i];
       reverse(d.begin(),d.end());
       //cout<<d<<" Iam up"<<endl;
       if(d.compare(v[i])==0)
       {
         palindrome.push_back(v[i]);
         //v.erase(v.begin()+i);
       }
       else if(find(v.begin(),v.end(),d)!=v.end())
       {
           ///if the palindrome elements have push them into right and left array
           //cout<<v[i]<<"for"<<d<<endl;
           int pos = find(v.begin(),v.end(),d)-v.begin();
           if((find(right.begin(),right.end(),v[i])==right.end())&& (find(left.begin(),left.end(),v[pos])==left.end()) && (find(right.begin(),right.end(),v[pos])==right.end())&& (find(left.begin(),left.end(),v[i])==left.end()) )
           {
               right.push_back(v[i]);
               left.push_back(v[pos]);
           }

       }
    }
    ///merging
    vector<string>result;
    if(palindrome.empty()&& right.empty()&& left.empty())
        cout<<0<<endl;
    else if(!palindrome.empty() && right.empty()&& left.empty())
        {
            cout<<1<<endl<<palindrome[0]<<endl;
        }
    else if(palindrome.empty())
    {
        int len = right.size();
        for(int i=0;i<len;i++)
        {
            result.push_back(right[i]);
        }
        for(int i=len-1;i>=0;i--)
        {
            result.push_back(left[i]);
        }
        len=result.size();
        cout<<len*m<<endl;
        for(int i=0;i<len;i++)
            cout<<result[i];
        cout<<endl;
    }
     else
    {
        int len = right.size();
        for(int i=0;i<len;i++)
        {
            result.push_back(right[i]);
        }
        result.push_back(palindrome[0]);
        for(int i=len-1;i>=0;i--)
        {
            result.push_back(left[i]);
        }
        len=result.size();
        cout<<len*m<<endl;
        for(int i=0;i<len;i++)
            cout<<result[i];
        cout<<endl;
    }
}
