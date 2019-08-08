#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n,i,j,x,r,cnt=0;
  cout<<"please enter the length of the array: ";
  cin>>n;
  vector<int>v;
  for(i=0;i<n;i++)
  {
     cin>>x;
     v.push_back(x);
  }
  for(i=1;i<n;i++)
  {
  r=v[i];
   for(j=i-1;j>=0&&v[j]>r;j--)
    {
      v[j+1]=v[j];cnt++;
    }cnt++;cout<<cnt<<" ";
    v[j+1]=r;
  }
  for(i=0;i<n;i++)
   cout<<v[i]<<"\t";
}
