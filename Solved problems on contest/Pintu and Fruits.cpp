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
ll mark[5010],m2[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>n>>m;
        ll a[100000];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            m2[a[i]]=1;
        }
        ll b=0,c=10000000000,d=0;
        for(ll i=0; i<n; i++)
        {
            //cout<<a[i]<<endl;
            cin>>b;
            mark[a[i]]+=b;
        }
        for(ll i=0; i<60; i++)
        {
            if(m2[i])
            {   //cout<<mark[i]<<endl;
                c=min(c,mark[i]);
                d=1;
            }
        }
        if(d)
            cout<<c<<endl;
        else
            cout<<0<<endl;
        for(ll i=0; i<60; i++)
        {
            mark[i]=0;
            m2[i]=0;
        }
    }
}

