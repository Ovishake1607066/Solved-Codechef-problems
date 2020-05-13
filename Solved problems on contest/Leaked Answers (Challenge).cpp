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
#define l 1000000
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mm,k;
        cin>>n>>mm>>k;
        vector<ll>v;
        map<ll,ll>m;
        ll b,c=0,d=0,e=0;
        vector<ll>a[n+10];
        loop
        {
            for(ll j=0; j<k; j++)
            {
                ll aa;
                cin>>aa;
                a[i].push_back(aa);
            }
        }
        for(ll i=0; i<n; i++)
        {
            d=-1;
            for(ll j=0; j<k; j++)
            {
                if(m[j]==0)
                {
                    d=j;
                    break;
                }
            }
            if(d==-1)
            {
                m.clear();
                d=0;
            }
            e=a[i][d];
            for(ll j=0; j<k; j++)
            {
                if(a[i][j]==e)
                {
                    m[j]++;
                }
            }
            if(i==n-1)
                printf("%lld\n",e);
            else
                printf("%lld ",e);
        }
        /*for(ll i=0;i<n;i++)
        {
            map<ll,ll>m;
            ll x=10000000000000,y=0;
            for(ll j=0;j<k;j++)
            {
                m[a[i][j]]++;
            }
            for(ll j=1;j<=mm;j++)
            {
                x=min(x,m[j]);
            }
            for(ll j=1;j<=mm;j++)
            {
                if(x==m[j] && i==n-1)
                {
                    printf("%lld\n",j);
                    break;
                }
                if(x==m[j] && i!=n-1)
                {
                    printf("%lld ",j);
                    break;
                }
            }
            */
    }
}

