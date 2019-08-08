#include<iostream>
using namespace std;

int main()
{
    int n,cnt=0,i,cnt1=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            cnt++;
        }

        else if(s[i]!='x')
            {
                if(cnt>2)
                {

                cnt1++;
                }
                cnt=0;
            }
         if(cnt>2)
            {

                cnt1++;
                cnt--;
            }
    }
        cout<<cnt1<<endl;
}
