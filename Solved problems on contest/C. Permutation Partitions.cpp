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
    ll n,k;
    cin>>n>>k;
    ll a[n+10],b,c,d=0;
    vector<ll>v,v2;
    loop
    {
        cin>>a[i];
    }
    c=((n*n)+n)/2;
    b=n-k;
    c=c-(((b*b)+b)/2);
    cout<<c<<" ";
    if(k==n)
        cout<<1<<endl;
    else if(k==1)
    {
        cout<<1<<endl;
    }
    else
    {
        loop
        {
            if(a[i]>n-k)
            {
                v.push_back(i+1);
            }
        }
        for(ll i=1;i<v.size();i++)
        {
            //cout<<v[i]<<endl;
                v2.push_back(v[i]-v[i-1]);
        }
        v2.push_back(1);
        c=1;
        for(ll i=0;i<v2.size();i++)
        {
            //cout<<v2[i]<<endl;
            c=((c%998244353)*(v2[i]%998244353))%998244353;
        }
        cout<<c<<endl;
    }
}

