#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,e=0,f=0;
        cin>>a>>b>>c;
        for(ll i=0; i<c; i++)
        {
            cout<<1;
        }
        if(c)
        {
            cout<<1;
            if(a)
            {
                for(ll i=0; i<a+1; i++)
                {
                    cout<<0;
                }
            }
            if(a)
            {
                for(ll i=0; i<b-1; i++)
                {
                    if(i%2==0)
                        cout<<1;
                    else
                        cout<<0;
                }
            }
            else
            {
                for(ll i=0; i<b; i++)
                {
                    if(i%2==0)
                        cout<<0;
                    else
                        cout<<1;
                }
            }
        }
        else
        {
            if(a)
            {
                for(ll i=0; i<a+1; i++)
                {
                    cout<<0;
                }
            }
            if(a)
            {
                for(ll i=0; i<b; i++)
                {
                    if(i%2==0)
                        cout<<1;
                    else
                        cout<<0;
                }
            }
            else
            {
                if(b)
                {
                    for(ll i=0; i<b+1; i++)
                    {
                        if(i%2==0)
                            cout<<0;
                        else
                            cout<<1;
                    }
                }
            }
        }
        cout<<endl;
    }
}

