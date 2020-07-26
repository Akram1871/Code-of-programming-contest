#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char a='a',e='e',ii='i',o='o',u='u',y='y';
    cin>>s;
    int n=s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    //cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a||s[i]==e||s[i]==ii||s[i]==o||s[i]==u||s[i]==y)
        {
            s.erase(s.begin()+i);
            i--;
            //cout<<"after erase "<<s<<endl;
        }

        else
        {
            s.insert(i,".");
            i++;
            //cout<<"before erase "<<s<<endl;
        }

    }
    cout<<s<<endl;

}
