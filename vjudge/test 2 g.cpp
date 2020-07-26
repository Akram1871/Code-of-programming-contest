#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    string str;
    cin>>str;
    long int d=str.length();
    long int i,j;
    for( i=0;i<d;i++)
    {
        if(str[i]+d>122){
                j=(d-(122-str[i]+1))%26;
           printf("%c",'a'+j);}
        else
        printf("%c",str[i]+d);
    }


cout<<endl;
}
}

