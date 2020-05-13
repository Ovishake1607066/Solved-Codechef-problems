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
ll m2[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b,c=0,d=0,e;
        for(ll i=0;i<111;i++)
            {
                mark[i]=0;
                m2[i]=0;
            }
        for(ll i=1;i<=n;i++)
        {
            cin>>e;
            a[i]=e;
            mark[e]=i;
        }
        for(ll i=1;i<=n;i++)
        {
            b=mark[i];
            //cout<<b<<endl;
            if(b==i)
                continue;
            for(ll j=b;j>i;j--)
            {
                if(m2[j-1]==0 && a[j-1]>a[j])
                {
                    m2[j-1]=1;
                    ll x=a[j-1];
                    a[j-1]=i;
                    a[j]=x;
                    c++;
                }
                else
                    break;
                if(c>=n-1)
                    break;
            }
            if(c>=n-1)
                break;
        }
        for(ll i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}

