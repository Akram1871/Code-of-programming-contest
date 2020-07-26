#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return (a<b);
}
int main()
{
    int n,len,t,i,cnt_c,cnt_o,cnt_d,cnt_e,cnt_f,cnt_h;
    long long total;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>n;
        cnt_c=0,cnt_d=0,cnt_e=0,cnt_f=0,cnt_h=0,cnt_o=0;
        while(n--)
        {
            cin>>s;
            len =s.size();
           for(i=0;i<len;i++)
           {
               if(s[i]=='c')
                cnt_c++;
               else if(s[i]=='o')
                cnt_o++;
               else if(s[i]=='d')
                cnt_d++;
               else if(s[i]=='e')
                cnt_e++;
               else if(s[i]=='h')
                cnt_h++;
               else if(s[i]=='f')
                cnt_f++;
           }

        }
            cnt_c=cnt_c/2;
            cnt_e=cnt_e/2;
            int res=min({cnt_d,cnt_f,cnt_h,cnt_o,cnt_c,cnt_e},comp);
            cout<<res<<endl;
    }

}

