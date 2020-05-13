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
ll mark[5010];
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,q,b=0,c=0,d,e,f,g=0,h=0;
        scanf("%lld",&n);
        scanf("%lld",&q);
        ll a[n+10];
        loop
        {
            scanf("%lld",&f);
            b=0;
            c=0;
            for (ll kk = 31; kk >= 0; kk--)
            {
                ll k = f >> kk;
                if (k & 1)
                    c++;
                else
                    b++;
            }
            if(c%2==0)
                g++;
            else
                h++;
        }
        for(ll i=0; i<q; i++)
        {
            scanf("%lld",&d);
            b=0;
            c=0;
            for (ll kk = 31; kk >= 0; kk--)
            {
                ll k = d >> kk;
                if (k & 1)
                    c++;
                else
                    b++;
            }
            ll y=c;
            ll p=0,q=0;
            if(y%2==0)
            {
                p=g;
                q=h;
            }
            else
            {
                p=h;
                q=g;
            }
            printf("%lld %lld\n",p,q);
        }
    }
}

