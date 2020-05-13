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
        ll n,k;
        cin>>n>>k;
        ll a[n],b,c=0,d=llmax;
        loop
        {
            cin>>a[i];
        }
        map<ll,ll>m1,m2,m3,m4;
        for(ll i=0;i<n/2;i++)
        {
            ll x=min(a[i],a[n-i-1]);
            ll y=max(a[i],a[n-i-1]);
            m1[a[i]+a[n-i-1]]++;
            m2[x+1]++;
            m3[y+k]++;
        }
        for(ll i=2;i<=2*k;i++)
        {
            c=c+m2[i]-m3[i-1];
            m4[i]=c;
            //cout<<i<<" "<<c<<endl;
        }
        for(ll i=2;i<=2*k;i++)
        {
            m4[i]-=m1[i];
            b=n/2-m1[i]-m4[i];
            d=min(d,b*2+m4[i]);
        }
        cout<<d<<endl;
    }
}

