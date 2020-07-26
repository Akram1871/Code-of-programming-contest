#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n-10;
    if(n==1||n==11||(n>=2 && n<=9))
        cout<<"4"<<endl;
    else if(n==10)
        cout<<"15"<<endl;
    else
        cout<<"0"<<endl;
}
