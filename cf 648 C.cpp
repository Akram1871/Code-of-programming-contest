#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len = s.size();
        long long odd=0,even=0,cnt=0,cnt_odd=0,cnt_even=0;
        for(int i=0; i<len; i++)
        {
            if((i%2==0)&& s[i]!='*')
                odd+=s[i]-'0';
            else if((i%2==1)&& s[i]!='*')
                even+=s[i]-'0';
            if(s[i]=='*')
            {
                cnt++;
                if(i%2)
                    cnt_even++;
                else
                    cnt_odd++;
            }

        }
        long long total = odd - even,ans;
        if(total<0)
            ans = -1*total;
        if(ans%11==0)
        {
            if(s[0]=='*'&&cnt==1)
                cout<<-1;

            else if(s[0]=='*')
            {
                s[0]='1';
                int c=0;
                for(int i=0; i<len; i++)
                {
                    if(s[i]=='*')
                    {
                        s[i]='1';
                        c++;
                    }
                    if(c>0)
                        break;
                }
                for(int i=0; i<len; i++)
                    if(s[i]=='*')
                        s[i]='0';
                cout<<s<<endl;

            }
            else
            {
                for(int i=0; i<len; i++)
                    if(s[i]=='*')
                        s[i]='0';
                cout<<s<<endl;
            }


        }
        else
        {
            int rem = ans%11;
            if(cnt==0)
                cout<<-1<<endl;
            else if(rem==10 && cnt==1)
                cout<<-1<<endl;
            else if(rem==10)
            {
                if(total<0 && cnt_even<2)
                    cout<<-1<<endl;
                else if(total>0 && cnt_odd<2)
                    cout<<-1<<endl;
                else
                {
                    if(total<0)
                    {
                    int c=0;
                    for(int i=0; i<len; i++)
                    {
                        if(s[i]=='*' && c==0 && i%2==1)
                        {
                            s[i]='9';
                            cnt--;
                        }
                        else if(s[i]=='*' && c==1 && i%2==1 )
                            s[i]='1';

                        else if(s[i]=='*')
                            s[i]='0';
                    }
                    cout<<s<<endl;
                    }
                    else
                        {
                    int c=0;
                    for(int i=0; i<len; i++)
                    {
                        if(s[i]=='*' && c==0 && i%2==0)
                        {
                            s[i]='9';
                            cnt--;
                        }
                        else if(s[i]=='*' && c==1 && i%2==0 )
                            s[i]='1';

                        else if(s[i]=='*')
                            s[i]='0';
                    }
                    cout<<s<<endl;
                    }

                }

            }
            else
            {
                int cnt1 = cnt ;
                for(int i=0; i<len; i++)
                {
                    if(s[i]=='*' && cnt1==cnt)
                    {
                        s[i]=rem+'0';
                        cnt--;
                    }
                    else if(s[i]=='*' )
                        s[i]='0';
                }
                cout<<s<<endl;
            }
        }
    }

}

