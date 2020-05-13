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
ll m=1000000007;
ll modFact(ll n, ll p)
{
    if (n >= p)
        return 0;

    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % p;

    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        ll a1=0,a2=0,b1=0,b2=0,c=0,d=0;
        for(ll i=0;i<n;i++)\
        {
            if(s1[i]=='0')
                a1++;
            else
                a2++;
        }
        for(ll i=0;i<n;i++)
        {
            if(s2[i]=='0')
                b1++;
            else
                b2++;
        }
        ll e=modFact(n,m);
        ll x=((modFact(a1,m)%m)*(modFact(a2,m)%m))%m;
        c=(e%m/x%m)%m;
        ll y=((modFact(b1,m)%m)*(modFact(b2,m)%m))%m;
        d=(e%m/y%m)%m;
        ll g=(c%m*d%m)%m;
        ll q=((a1*b1)%m+(a2*b2)%m)%m;
        cout<<max(1LL,q)<<endl;
        //cout<<g<<endl;
    }
}

