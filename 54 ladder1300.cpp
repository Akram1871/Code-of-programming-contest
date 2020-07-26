#include<bits/stdc++.h>
using namespace std;

int a[100];
void myrecursion(int x)
{
    if(x==1)
        return;

    else
    {
        myrecursion(x-1);
         swap(a[x],a[x-1]);
    }
}
int main()
{
  int n;
  cin>>n;
  cout<<n;
  for(int i=1;i<n;i++)
      cout<<" "<<i;
    cout<<endl;


}
