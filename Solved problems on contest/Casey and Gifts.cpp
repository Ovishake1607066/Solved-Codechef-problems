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
ll fin(ll x)
{
    if(mark[x]==x)
        return x;
    else
        return fin(mark[x]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    ll a,b,c=0,d=0,e=0;
    cin>>n>>m;
    for(ll i=0;i<=n;i++)
        mark[i]=i;
    for(ll i=0;i<m;i++)
    {
        cin>>a>>b;
        ll x=fin(a);
        ll y=fin(b);
        if(x==a && y==b)
            mark[b]=mark[a];
        else if(x!=a && y!=b)
        {
            mark[y]=mark[x];
        }
        else if(x!=a)
        {
            mark[b]=x;
        }
        else
            mark[a]=y;
    }
    for(ll i=1;i<=n;i++)
    {
        //cout<<mark[i]<<endl;
        if(mark[i]==i)
            c++;
    }
    cout<<c<<endl;
}

