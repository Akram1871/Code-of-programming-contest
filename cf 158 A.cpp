#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char find_ans(string s,ll b)
{

    int flg =0;
    for(char i='0'; i<='9'; i++)
    {
        ll a;
        stringstream ss;
        string s2=s;
        s2+=i;
        ss<<s2;
        ss>>a;
        if(a%b==0)
        {
            flg =1;
            return i;
        }

    }
    if(!flg)
        return 'a';

}

int main()
{
    ll a,b,n,temp;
    char ch;
    string s;
    cin>>a>>b>>n;
    s=to_string(a);
    int flg =0;
    for(ll i=0; i<n; i++)
    {
        if(i==0)
        {
            ch = find_ans(s,b);
            if(ch=='a')
            {
                cout<<-1<<endl;
                flg = 1;
                break;
            }
            s+=ch;
        }
        else
            s+='0';


    }
    if(!flg)
        cout<<s<<endl;
}
