#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x,pos_s;
    cin>>n;
    int v[n+3];
    for(int i=0;i<n;i++)
        {
            cin>>v[i];

        }
     auto mn = min_element(v,v+n);

     auto mx = max_element(v,v+n);
     for(int i=0;i<n;i++)
     {
         if(v[i]==*mn)
            pos_s=i;
     }

     auto it1 = find(v,v+n,*mx);
     int pos_b=it1-v;
     if(pos_s>pos_b)
        cout<<(pos_b+(n-(pos_s+1)))<<endl;
     else
        cout<<(pos_b+(n-(pos_s+2)))<<endl;

     //cout<<*mn<<endl<<*mx<<endl<<it-v;
}
