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
        ll n,m;
        cin>>n>>m;
        ll a[n+10],b[n+10],c[n+10],d=0,e=0,cc=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=i;
        }
        for(ll i=1;i<=n;i++)
        {
            c[a[i]]=i;
        }
        for(ll i=0;i<m;i++)
        {
            ll aa,bb;
            cin>>aa>>bb;
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(b[j]==i)
                {
                    if(b[j]==c[j])
                        ;
                    else
                    {
                        d=a[i];
                        e=b[d];
                        b[d]=i;
                        b[j]=e;
                        cc++;
                    }
                  /*  for(ll xx=1;xx<=n;xx++)
                    {
                        cout<<b[xx]<<" ";
                    }
                    cout<<endl;*/
                    break;
                }
            }
        }
        cout<<cc<<endl;
    }
}
