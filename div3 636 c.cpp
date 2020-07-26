#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n),pos,neg;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ps=0,cnt=0,ng=0;
        for(int i=0;i<n;i++)
        {
            if(cnt%2==0 && a[i]>0)
            {
                pos.push_back(a[i]);
                ps=a[i];
                cnt++;
            }
            else if(a[i]>ps)
            {
                pos.pop_back();
                pos.push_back(a[i]);
                ps=a[i];
            }
            else if(a[i]<0 && cnt%2==1)
            {
                pos.push_back(a[i]);
                ng=a[i];
                cnt++;
            }
            else if(a[i]>ng &&a[i]<0)
            {
                pos.pop_back();
                pos.push_back(a[i]);
                ng=a[i];
            }
        }

      /* cout<<"pos here"<<endl;
        for(int i=0;i<pos.size();i++)
            cout<<pos[i]<<" ";
        cout<<endl;*/
        ///hello

         ps=0,cnt=0,ng=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && cnt%2==0)
            {
                neg.push_back(a[i]);
                ng=a[i];
                cnt++;
            }
            else if(a[i]>ng && a[i]<0)
            {
                neg.pop_back();
                neg.push_back(a[i]);
                ng=a[i];
            }
           else if(cnt%2==1 && a[i]>0)
            {
                neg.push_back(a[i]);
                ps=a[i];
                cnt++;
            }
            else if(a[i]>ps && cnt>0)
            {
                neg.pop_back();
                neg.push_back(a[i]);
                ps=a[i];
            }

        }
       /* cout<<"neg here "<<endl;
        for(int i=0;i<neg.size();i++)
            cout<<neg[i]<<" ";
        cout<<endl;*/
        int lenp=pos.size();
        int lenn=neg.size();
       long long int sum=0,sum2=0;
        if(lenn==lenp)
        {
            for(int i=0;i<lenn;i++)
            {
                sum+=pos[i];
                sum2+=neg[i];
            }
            cout<<max(sum,sum2);
        }
       else if(lenn>lenp)
        {
            for(int i=0;i<lenn;i++)
                sum+=neg[i];
            cout<<sum<<endl;
        }
        else
        {
            for(int i=0;i<lenp;i++)
                sum+=pos[i];
            cout<<sum<<endl;
        }

            //cout<<sum<<endl;
    }
}
