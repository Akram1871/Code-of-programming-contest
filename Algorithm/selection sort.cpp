#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;
  int n,x;
  cout<<"please enter the length of array"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  for(int i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++)
   {
      if(v[j]<v[i])
      swap(v[i],v[j]);
   }
   for(int i=0;i<n;i++)
    cout<<v[i]<<"\t";
}
