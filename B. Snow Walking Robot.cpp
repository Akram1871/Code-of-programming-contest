#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,l1,l2,i;
    string s;
    cin>>n;
    while(n--)
    {
       int cu=0,cd=0,cr=0,cl=0;
       cin>>s;
       a=s.length();
       for(i=0;i<a;i++)
       {
           if(s[i]=='U')
            cu++;
           else if(s[i]=='D')
            cd++;
           else if(s[i]=='R')
            cr++;
           else
            cl++;
       }
       if(cu>cd)
        l1=cd;
       else
        l1=cu;
       if(cr>cl)
        l2=cl;
       else
        l2=cr;
        ///result part
        if(l1==0&&l2==0)
            cout<<"0"<<endl;
        else if(l1==0||l2==0)
            cout<<"2"<<endl;
        else
           cout<<(l1+l2)*2<<endl;
        if(l1==0&&l2!=0)
        {
            cout<<"LR"<<endl;
        }
        else if(l2==0&&l1!=0)
        {
            cout<<"DU"<<endl;
        }
        else
        {
           for(i=0;i<l1;i++)
            cout<<'U';
           for(i=0;i<l2;i++)
            cout<<'R';
           for(i=0;i<l1;i++)
            cout<<'D';
           for(i=0;i<l2;i++)
            cout<<'L';
            cout<<endl;
        }

  }
}
