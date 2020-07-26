#include<bits/stdc++.h>
using namespace std;
string s;
int cnt=0;
void my_rec_fun(int i)
{
    if(s[i]!=s[i+1]-1 || i+1==s.size()-1)
        return;
    else
    {
        my_rec_fun(i+1);
        cnt++;
        s.erase(s.begin()+i);
    }
}
int main()
{
    int n,j;
    cin>>n>>s;
    for(int i=0;i<s.size();)
    {
        if(s[i]==s[i-1]+1 && i!=0)
        {
            s.erase(s.begin()+i);
            cnt++;
        }
        else if(s[i]==s[i+1]-1 && i!=s.size()-1)
        {
            my_rec_fun(i+1);
        }
        else if(s[i]==s[i+1]+1 && i!=s.size()-1)
        {
            s.erase(s.begin()+i);
            cnt++;
        }
        else
            i++;
    }
    cout<<cnt<<endl;
}
