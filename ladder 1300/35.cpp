#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,l1,l2,l3;
    char a='W',b='U',c='B';
    cin>>s;
    l1=0,l2=1,l3=2;
    while(l3<s.size())
    {
        if(s[l1]==a && s[l2]==b &&s[l3]==c)
        {
            s.erase(s.begin()+l1);
            s.erase(s.begin()+l1);
            s[l1]=' ';
           //cout<<"i have   "<<s<<endl;
        }

        else
        {
            l1++,l2++,l3++;
        }
    }

      cout<<s<<endl;

}
