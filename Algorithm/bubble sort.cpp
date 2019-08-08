#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int n,i,j,cnt=0;
 cout<<"please enter the length of the array: ";
 cin>>n;
 int v[n];
 for(i=0;i<n;i++)
   {
     cin>>v[i];
   }

  for(i=n-1;i>0;i--)
    for(j=i-1;j>=0;j--)
    {cnt++;
      if(v[j]<v[i])
      swap(v[j],v[i]);
    }

  for(i=0;i<n;i++)
   cout<<v[i]<<"\t";
}

