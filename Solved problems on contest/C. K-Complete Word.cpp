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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll a,b,c=0,d=0;
        a=n/k;
        for(ll i=0;i<k/2;i++)
        {
            map<ll,ll>m;
            b=0;
            for(ll j=0;j<a;j++)
            {
                m[(ll)s[k*j+i]]++;
                m[(ll)s[k*j+k-i-1]]++;
            }
            for(ll j=97;j<=122;j++)
            {
                b=max(b,m[j]);
            }
            c=c+(a*2)-b;
        }
        if(k%2==1)
        {
            map<ll,ll>m;
            b=0;
            for(ll j=0;j<a;j++)
            {
                m[(ll)s[k*j+(k/2)]]++;
            }
            for(ll j=97;j<=122;j++)
            {
                b=max(b,m[j]);
            }
            c=c+(a)-b;
        }
        cout<<c<<endl;
    }
}
