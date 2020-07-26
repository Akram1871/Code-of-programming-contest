#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    string s;
    map<string,int>mp;
    cin>>n;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
    // Declaring the type of Predicate that accepts 2 pairs and return a bool
	typedef function<bool(pair<string, int>, pair<string, int>)> comp;

    comp compare=[](pair<string,int>a,pair<string,int>b)
                    {
                        return a.second>b.second || a.first<b.first ;
                    };
    multiset<pair<string,int>,comp>s1(mp.begin(),mp.end(),compare);

    pair<string,int> res = *s1.begin();

    for(pair<string,int>it:s1)
    {
        if(it.second==res.second)
            cout<<it.first<<endl;
    }

}
