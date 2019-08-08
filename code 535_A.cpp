#include<iostream>
using namespace std;
int main()
{
    long int l1,l2,r1,r2;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2)
           cout<<l1<<" "<<r2<<endl;
        else
        cout<<l1<<" "<<l2<<endl;
    }
    return 0;
}
