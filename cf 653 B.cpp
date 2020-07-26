#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n==1)
            cout<<0<<endl;
        else if(n==3)
            cout<<2<<endl;
        else if(n<6)
            cout<<-1<<endl;
        else if(n%3!=0)
            cout<<-1<<endl;
        else
        {
            int cnt=0;
            int flg=0;
            if(n%6!=0 && n%3==0)
                {
                    n*=2;
                    cnt++;
                }
            while(n%6==0)
            {
                n=n/6;
                //cout<<1<<" n = "<<n<<endl;
                if(n==2)
                {
                    flg=1;
                    cout<<-1<<endl;
                     break;
                }
                else if(n%6!=0 && n%3!=0)
                {
                    flg=1;
                    cout<<-1<<endl;
                     break;
                }
                cnt++;
                if(n%6!=0 && n%3==0)
                {
                    n*=2;
                    cnt++;
                }


            }
            if(!flg)
                cout<<cnt<<endl;

        }
    }
}

