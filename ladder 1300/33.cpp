#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,s;
    int c,aa,bb;
    cin>>aa>>bb;
    c=aa+bb;

    ///converting number into string
    ostringstream str1,str2,str3;
    str1<<c;
    s=str1.str();
    str2<<aa;
    a=str2.str();
    str3<<bb;
    b=str3.str();

    //cout<<a<<" "<<b<<" "<<s<<endl;
    int ln_a,ln_b,ln_c;
    ln_a=a.size(),ln_b=b.size(),ln_c=s.size();
    for(int i=0;i<ln_a;i++)
    {
         if(a[i]=='0')
         {
            a.erase(a.begin()+i);
            ln_a--;
            i--;
         }

    }

    for(int i=0;i<ln_b;i++)
        if(b[i]=='0')
        {
           b.erase(b.begin()+i);
           ln_b--;
           i--;
        }

    for(int i=0;i<ln_c;i++)
        if(s[i]=='0')
        {
           s.erase(s.begin()+i);
           ln_c--;
           i--;
        }


  ///converting string into intiger
  stringstream s1(a),s2(b),s3(s);
  //aa=0,bb=0,c=0;
  s1>>aa,s2>>bb,s3>>c;

    if(aa+bb==c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
