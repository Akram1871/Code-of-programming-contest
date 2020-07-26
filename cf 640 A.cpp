#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int temp =n,cnt =0,digit=0;
       while(temp!=0)
       {
          int rem = temp%10;
           if(rem!=0)
            cnt++;
           temp/=10;
       }
       if(cnt==1)
        cout<<1<<endl<<n<<endl;
       else
       {
           cout<<cnt<<endl;
           while(n!=0)
           {
               digit++;
               int rem = n%10;
               if(rem!=0)
               {
                   cout<<rem;
                   for(int i=1;i<digit;i++)
                    cout<<0;
                   cout<<" ";
               }
               n/=10;
           }
           cout<<endl;
       }
    }
}
