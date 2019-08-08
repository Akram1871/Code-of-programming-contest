#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>s;
    int n,t,j;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>t;
        int k,x,i;
     for(i=0;i<t;i++)
     {
         cin>>x;
         s.push_back(x);
     }
      k=t-2;
      sort(s.begin(),s.end());

       cout<<min(s[t-2]-1,k)<<"\n";
      s.clear();
       }


    }

