#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b,c=0,d=0,e,f;
        cin>>n;
        ll a[n];
        c=0;
        for(ll i=0; i<n; i++)
            cin>>a[i];
            b=a[0];
            for(ll i=1; i<n; i++)
            {
                b=__gcd(b,a[i]);

            }
            if(b==1)
                cout<<0<<endl;
            else
                cout<<-1<<endl;

    }
}
