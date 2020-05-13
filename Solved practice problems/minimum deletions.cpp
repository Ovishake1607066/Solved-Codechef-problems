#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b) {
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}
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
        for(ll i=0;i<n;i++)
            cin>>a[i];
        while(1)
        {
            sort(a,a+n);
            b=a[n-1];
            c=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]==0 || a[i]==b)
                    continue;
                if(b%a[i]==0)
                {
                    a[n-1]=0;
                    c=1;
                    d++;
                    break;
                }
            }
            if(c==0)
                break;
        }
        if(d==n-1)
            cout<<-1<<endl;
        else
            cout<<d<<endl;
    }
}
