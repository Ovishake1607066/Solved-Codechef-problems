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
    ll n;
    scanf("%lld",&n);
    ll a[n+10],b[n+10],c=0,d=0,e=0,f=0,s[n+10];
    vector<ll>v1,v2,v3;
    loop
    {
        scanf("%lld",&a[i]);
    }
    loop
    {
        scanf("%lld",&b[i]);
    }
    loop
    {
        s[i]=a[i]-b[i];
    }
    sort(s,s+n);
    loop
    {
        if(s[i]<=0)
            continue;
        ll pos=lower_bound(s,s+n,-s[i]+1)-s;
        c+=(i-pos);
        //cout<<c<<endl;
    }
    printf("%lld\n",c);

}

