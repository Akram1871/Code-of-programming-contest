#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,mid,a_p,b_p,c_p;
    long long int sum;
    int v[3];
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        v[0]=a;
        v[1]=b;
        v[2]=c;
        sort(v,v+3);
        mid=ceil((v[0]+v[2])/2);
        a=v[0];b=v[1];c=v[2];
        //a prime block
        if(a<mid)
           a_p=a+1;
           else
            a_p=a;
        //c prime block
        if(c>mid)
            c_p=c-1;
        else
            c_p=c;
        //b prime block
        if(b>mid&&b!=c_p)
            b_p=b-1;
        else if(b<mid&&b!=a_p)
            b_p=b+1;
        else
            b_p=b;
        sum=((b_p-a_p)+(c_p-a_p)+(c_p-b_p));
        cout<<sum<<endl;
    }
}
