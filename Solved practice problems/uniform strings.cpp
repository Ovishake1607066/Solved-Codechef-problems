#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,b,c=0,d;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        char ch;
        cin>>s;
        if(s[0]!=s[s.size()-1])
            c++;
        ch=s[0];
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]!=ch)
            {
                c++;
                ch=s[i];
            }
        }
        if(c<=2)
            cout<<"uniform"<<endl;
        else
            cout<<"non-uniform"<<endl;
    }
}
