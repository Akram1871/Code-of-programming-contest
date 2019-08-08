#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int a,b,c;
while(scanf("%d%d%d",&a,&b,&c)==3)
  {
    if(a<=b&&a<=c)
     cout<<"Yes"<<endl;
    else
     cout<<"No"<<endl;
  }
}
