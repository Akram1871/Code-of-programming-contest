#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nand,x,y;
    string a,b;
    vector<int>v;
    vector<int>::iterator it;
    cin>>a>>b;
    int len=a.size();

    for(int i=0;i<len;i++)
    {
        if(a[i]!=b[i])
            v.push_back(1);
        else
            v.push_back(0);
    }
    for(it=v.begin();it!=v.end();it++)
        cout<<*it;
    cout<<endl;
}
