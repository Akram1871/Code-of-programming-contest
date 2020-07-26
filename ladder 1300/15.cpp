#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(!s.compare("++X"))
            ++x;
        else if(!s.compare("X++"))
            x++;
        else if(!s.compare("X--"))
            x--;
        else if(!s.compare("--X"))
            --x;
    }
    cout<<x<<endl;
}
